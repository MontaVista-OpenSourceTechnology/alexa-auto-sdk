package com.amazon.sampleapp.impl.LocalMediaSource;

import android.content.Context;

import com.amazon.aace.alexa.LocalMediaSource;
import com.amazon.aace.audio.AudioOutput;
import com.amazon.sampleapp.impl.Logger.LoggerHandler;
import com.amazon.sampleapp.impl.PlaybackController.PlaybackControllerHandler;

public abstract class LocalMediaSourceHandler extends LocalMediaSource
{
    private static final String sTag = LocalMediaSourceHandler.class.getSimpleName();

    private final LoggerHandler mLogger;

    private float mVolume = 0.5f;
    private AudioOutput.MutedState mMutedState = AudioOutput.MutedState.UNMUTED;
    private final PlaybackControllerHandler mPlaybackController;

    protected LocalMediaSourceHandler( Context context, LoggerHandler logger, Source type, PlaybackControllerHandler playbackControllerHandler ) {
        super( type );
        mPlaybackController = playbackControllerHandler;
        mLogger = logger;
    }

    @Override
    public boolean play( ContentSelector selector, String payload ) {
        mLogger.postInfo( sTag, String.format( "play [source=%s,selector=%s,payload=%s]", getSource(), selector.toString(), payload));
        setPlaybackState("PLAYING");
        mPlaybackController.hidePlayerInfoControls();
        mPlaybackController.setPlayerInfo("mock", "mock", getSource().toString());
        return true;
    }

    @Override
    public boolean playControl( PlayControlType controlType ) {
        mLogger.postInfo( sTag, String.format( "playControl [source=%s,controlType=%s]", getSource(), controlType.toString()));
        mPlaybackController.hidePlayerInfoControls();
        mPlaybackController.setPlayerInfo("mock", "mock", getSource().toString());
        switch( controlType ) {
            case STOP:
                setPlaybackState("STOPPED");
                mPlaybackController.stop();
                break;
            case PAUSE:
                setPlaybackState("PAUSED");
                mPlaybackController.stop();
                break;
            case RESUME:
                setPlaybackState("PLAYING");
                mPlaybackController.start();
                break;
            default:
                mPlaybackController.start();
                break;
        }
        return true;
    }

    @Override
    public boolean seek( long offset ) {
        mLogger.postInfo( sTag, String.format( "seek [source=%s,offset=%d]", getSource(), offset));
        return true;

    }

    @Override
    public boolean adjustSeek( long deltaOffset ) {
        mLogger.postInfo( sTag, String.format( "adjustSeek [source=%s,deltaOffset=%d]", getSource(), deltaOffset));
        return true;
    }

    @Override
    public LocalMediaSourceState getState() {

        LocalMediaSourceState stateToReturn = new LocalMediaSourceState();
        stateToReturn.playbackState = new PlaybackState();
        stateToReturn.playbackState.state = getSourcePlaybackState();
        stateToReturn.playbackState.supportedOperations = getSupportedPlaybackOperations();
        stateToReturn.sessionState = new SessionState();
        stateToReturn.sessionState.supportedContentSelectors = getSupportedContentSelectors();
        return stateToReturn;
    }

    @Override
    public boolean volumeChanged( float volume ) {
        mLogger.postInfo( sTag, String.format( "volumeChanged [source=%s,oldVolume=%2f,newVolume=%2f]", getSource(), mVolume, volume ) );

        if( mVolume != volume ) {
            mVolume = volume;
        }

        return true;
    }

    @Override
    public boolean mutedStateChanged( AudioOutput.MutedState state ) {
        mLogger.postInfo( sTag, String.format( "mutedStateChanged [source=%s,oldState=%s,newState=%s]", getSource(), mMutedState.toString(), state.toString() ) );

        if( state != mMutedState ) {
            mMutedState = state;
        }

        return true;
    }

    protected SupportedPlaybackOperation[] getSupportedPlaybackOperations() {
        return new SupportedPlaybackOperation[0];
    }

    protected ContentSelector[] getSupportedContentSelectors() {
        return new ContentSelector[0];
    }

    protected String getSourcePlaybackState() {
        return "IDLE";
    }

    protected void setPlaybackState( String state) {
    }
}
