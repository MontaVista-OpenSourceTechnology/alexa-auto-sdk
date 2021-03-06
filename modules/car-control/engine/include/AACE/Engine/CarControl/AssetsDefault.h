/*
 * Copyright 2019-2020 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *     http://aws.amazon.com/apache2.0/
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#ifndef AACE_ENGINE_CAR_CONTROL_ASSETS_DEFAULT_H
#define AACE_ENGINE_CAR_CONTROL_ASSETS_DEFAULT_H

#include <string>

static const std::string ASSETS_DEFAULT = R"({
  "version": 1,
  "assets": [
    {
      "assetId": "Alexa.Automotive.DeviceName.Fan",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "fan",
          "synonyms": [
            "air",
            "blower",
            "air flow"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "ventilador",
          "synonyms": [
            "aire",
            "soplador",
            "flujo de aire"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "ventilateur",
          "synonyms": [
            "air",
            "soufflante",
            "flux d'air",
            "flux d' air"
          ]
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.DeviceName.Car",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "car",
          "synonyms": [
            "automobile"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "auto",
          "synonyms": [
            "automóvil",
            "carro",
            "coche",
            "vehículo"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "voiture",
          "synonyms": [
            "automobile"
          ]
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.DeviceName.Heater",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "heater",
          "synonyms": []
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "calefactor",
          "synonyms": [
            "calefacción"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "réchauffeur",
          "synonyms": []
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.DeviceName.Cooler",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "cooler",
          "synonyms": []
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "enfriador",
          "synonyms": [
            "refrigerante"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "refroidisseur",
          "synonyms": []
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.DeviceName.ClimateControl",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "climate control",
          "synonyms": []
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "climatización",
          "synonyms": [
            "climatizador",
            "control de climatización"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "régulation thermique",
          "synonyms": []
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.DeviceName.AirConditioner",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "air conditioner",
          "synonyms": [
            "air conditioning",
            "air con",
            "ac",
            "a c",
            "a. c."
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "aire acondicionado",
          "synonyms": [
            "climatización",
            "ac",
            "a/c",
            "a c",
            "a. c."
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "climatiseur",
          "synonyms": [
            "conditionneur d'air",
            "conditionneur d' air",
            "climatisation",
            "air climatisé",
            "ac",
            "a. c."
          ]
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.DeviceName.Windshield",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "windshield",
          "synonyms": []
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "parabrisas",
          "synonyms": []
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "pare-brise",
          "synonyms": []
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.DeviceName.Window",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "window",
          "synonyms": []
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "ventana",
          "synonyms": []
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "fenêtre",
          "synonyms": []
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.DeviceName.Light",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "light",
          "synonyms": []
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "luz",
          "synonyms": []
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "lampe",
          "synonyms": []
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.DeviceName.ReadingLight",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "reading light",
          "synonyms": []
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "luz de lectura",
          "synonyms": []
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "lampe de lecture",
          "synonyms": []
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.DeviceName.DomeLight",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "dome light",
          "synonyms": []
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "luz del techo",
          "synonyms": [
            "luz interior"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "plafonnier",
          "synonyms": []
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.DeviceName.CabinLight",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "cabin light",
          "synonyms": []
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "luz de la cabina",
          "synonyms": [
            "luz de cabina"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "lampe de cabine",
          "synonyms": []
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.DeviceName.AmbientLight",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "ambient light",
          "synonyms": [
            "ambient lighting",
            "mood light",
            "mood lighting"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "luz ambiental",
          "synonyms": [
            "iluminación ambiental",
            "luz de ambiente",
            "iluminación de ambiente",
            "luces ambientales"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "lumière ambiante",
          "synonyms": [
            "éclairage ambiant",
            "lumière d'ambiance",
            "éclairage d'ambiance"
          ]
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.DeviceName.TrunkLight",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "trunk light",
          "synonyms": []
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "luz del maletero",
          "synonyms": [
            "luz de la cajuela"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "lampe de coffre",
          "synonyms": []
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.DeviceName.Vent",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "vent",
          "synonyms": [
            "vents",
            "air vent",
            "air vents",
            "air outlet",
            "air outlets"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "rejilla",
          "synonyms": [
            "rejillas",
            "rejilla del aire",
            "rejillas del aire",
            "salida del aire",
            "salidas del aire"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "bouche d’air",
          "synonyms": [
            "bouches d’air",
            "bouche d’aération",
            "bouches d’aération",
            "sortie d’air",
            "sorties d’air"
          ]
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.DeviceName.SeatHeater",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "seat heater",
          "synonyms": []
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "calentador de asiento",
          "synonyms": []
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "siège chauffant",
          "synonyms": []
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.DeviceName.DriverSeat",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "seat",
          "synonyms": [
            "driver seat",
            "driver side seat"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "asiento",
          "synonyms": [
            "asiento del conductor",
            "asiento del lado del conductor"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "siège",
          "synonyms": [
            "siège conducteur",
            "siège du conducteur"
          ]
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.DeviceName.PassengerSeat",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "passenger seat",
          "synonyms": [
            "passenger side seat"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "asiento del pasajero",
          "synonyms": [
            "asiento del lado del pasajero",
            "asiento del copiloto",
            "asiento del lado del copiloto"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "siège passager",
          "synonyms": [
            "siège du passager"
          ]
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.DeviceName.LeftSeat",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "left seat",
          "synonyms": [
            "left side seat"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "asiento izquierdo",
          "synonyms": [
            "asiento de la izquierda",
            "asiento del lado izquierdo"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "siège gauche",
          "synonyms": [
            "siège de gauche",
            "siège côté gauche"
          ]
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.DeviceName.RightSeat",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "right seat",
          "synonyms": [
            "right side seat"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "asiento derecho",
          "synonyms": [
            "asiento de la derecha",
            "asiento del lado derecho"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "siège droit",
          "synonyms": [
            "siège de droite",
            "siège côté droit"
          ]
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Setting.BodyVents",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "body vents",
          "synonyms": [
            "body vent",
            "face vents",
            "face vent",
            "body",
            "face"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "rejillas para el cuerpo",
          "synonyms": [
            "rejillas de cuerpo",
            "rejillas para la cara",
            "rejilla de la cara",
            "cuerpo",
            "cara"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "bouches d’air au corps",
          "synonyms": [
            "bouche d’air au corps",
            "bouches d’air au visage",
            "bouche d’air au visage",
            "corps",
            "visage"
          ]
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Setting.FloorVents",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "floor vents",
          "synonyms": [
            "floor vent",
            "downfacing vents",
            "downfacing vent",
            "feet vents",
            "feet vent",
            "floor",
            "feet"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "rejillas para el piso",
          "synonyms": [
            "rejilla del piso",
            "rejillas inferiores",
            "rejilla inferior",
            "rejilla para los pies",
            "rejilla de los pies",
            "piso",
            "pies"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "bouches d’air au plancher",
          "synonyms": [
            "bouche d’air au plancher",
            "bouche d’air vers le bas",
            "bouches d’air aux pieds",
            "bouche d’air aux pieds",
            "plancher",
            "pieds"
          ]
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Setting.WindshieldVents",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "windshield vents",
          "synonyms": [
            "windshield vent",
            "windshield"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "rejillas del parabrisas",
          "synonyms": [
            "rejillas para el parabrisas",
            "parabrisas"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "bouches d’air au pare-brise",
          "synonyms": [
            "bouche d’air au pare-brise",
            "pare-brise"
          ]
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Setting.MixVents",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "mix vents",
          "synonyms": [
            "mix vent",
            "mix",
            "mixed",
            "mixed vent",
            "mixed vents"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "rejillas mixtas",
          "synonyms": [
            "rejilla mixta",
            "mixta",
            "combinada",
            "rejilla combinada",
            "rejillas combinadas"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "bouches d’air mixte",
          "synonyms": [
            "bouche d’air mixte",
            "mixte",
            "bouches d’air mitigées",
            "bouche d’air mitigée"
          ]
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Setting.AirRecirculation",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "air recirculation",
          "synonyms": [
            "recirculation"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "recirculación de aire",
          "synonyms": [
            "recirculación"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "recirculation d’air",
          "synonyms": [
            "recirculation"
          ]
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Setting.Defrost",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "defroster",
          "synonyms": [
            "defrost"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "descongelador",
          "synonyms": [
            "descongelar"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "dégivreur",
          "synonyms": [
            "dégivrer"
          ]
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Setting.Defog",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "defogger",
          "synonyms": [
            "defog"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "desempañador",
          "synonyms": [
            "desempañar"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "désembueur",
          "synonyms": [
            "désembuer"
          ]
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Setting.ClimateSync",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "climate sync",
          "synonyms": [
            "sync",
            "climate control sync"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "sincronización del clima",
          "synonyms": [
            "sincronización",
            "sincronización del control del clima",
            "syncronizador",
            "sync",
            "sincronizado de temperatura",
            "sincronizador de climatizador"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "synchro climatisation",
          "synonyms": [
            "synchro",
            "synchronisation de la régulation thermique"
          ]
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Setting.Color",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "color",
          "synonyms": []
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "color",
          "synonyms": []
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "couleur",
          "synonyms": []
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Setting.Auto",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "auto",
          "synonyms": [
            "auto mode",
            "automatic",
            "automatic mode"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "auto",
          "synonyms": [
            "modo auto",
            "automático",
            "modo automático"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "auto",
          "synonyms": [
            "mode auto",
            "automatique",
            "mode automatique"
          ]
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Setting.Manual",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "manual",
          "synonyms": [
            "manual mode"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "manual",
          "synonyms": [
            "modo manual"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "manuel",
          "synonyms": [
            "mode manuel"
          ]
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Setting.Economy",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "economy",
          "synonyms": [
            "economy mode",
            "eco",
            "eco mode"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "economía",
          "synonyms": [
            "modo económico",
            "eco",
            "modo eco",
            "económico"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "économie",
          "synonyms": [
            "mode économie",
            "éco",
            "mode éco"
          ]
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Setting.FanSpeed",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "fan speed",
          "synonyms": [
            "airflow speed",
            "wind speed",
            "air speed",
            "air velocity"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "velocidad del ventilador",
          "synonyms": [
            "velocidad del flujo del aire",
            "velocidad del viento",
            "velocidad del aire",
            "fuerza del aire"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "vitesse du ventilateur",
          "synonyms": [
            "vitesse du flux d'air",
            "vitesse du flux d' air",
            "vitesse du vent",
            "vitesse de l'air",
            "vélocité de l'air"
          ]
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Setting.Temperature",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "temperature",
          "synonyms": [
            "temp"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "temperatura",
          "synonyms": [
            "temp"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "température",
          "synonyms": [
            "temp"
          ]
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Setting.Intensity",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "intensity",
          "synonyms": []
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "intensidad",
          "synonyms": []
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "intensité",
          "synonyms": []
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Setting.Mode",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "mode",
          "synonyms": []
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "modo",
          "synonyms": []
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "mode",
          "synonyms": []
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Setting.Position",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "position",
          "synonyms": []
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "posición",
          "synonyms": []
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "position",
          "synonyms": []
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Setting.Heat",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "heat",
          "synonyms": []
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "calor",
          "synonyms": [
            "calefacción"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "chauffage",
          "synonyms": []
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Value.Low",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "low",
          "synonyms": []
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "bajo",
          "synonyms": []
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": " bas",
          "synonyms": []
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Value.Minimum",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "minimum",
          "synonyms": [
            "min",
            "lowest"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "mínimo",
          "synonyms": [
            "mín",
            "lo más bajo"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "minimum",
          "synonyms": [
            "min",
            "le plus bas"
          ]
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Value.Medium",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "medium",
          "synonyms": [
            "mid",
            "middle"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "medio",
          "synonyms": [
            "med",
            "media"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "moyen",
          "synonyms": [
            "milieu",
            "intermédiaire"
          ]
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Value.High",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "high",
          "synonyms": []
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "alto",
          "synonyms": []
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "élevé",
          "synonyms": []
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Value.Maximum",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "maximum",
          "synonyms": [
            "max",
            "highest"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "máximo",
          "synonyms": [
            "máx",
            "lo más alto"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "maximum",
          "synonyms": [
            "max",
            "le plus élevé"
          ]
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Value.White",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "white",
          "synonyms": []
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "blanco",
          "synonyms": []
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "blanc",
          "synonyms": []
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Value.Red",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "red",
          "synonyms": []
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "rojo",
          "synonyms": []
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "rouge",
          "synonyms": []
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Value.Orange",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "orange",
          "synonyms": []
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "naranja",
          "synonyms": []
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "orange",
          "synonyms": []
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Value.Yellow",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "yellow",
          "synonyms": []
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "amarillo",
          "synonyms": []
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "jaune",
          "synonyms": []
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Value.Green",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "green",
          "synonyms": []
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "verde",
          "synonyms": []
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "vert",
          "synonyms": []
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Value.Blue",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "blue",
          "synonyms": []
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "azul",
          "synonyms": []
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "bleu",
          "synonyms": []
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Value.Indigo",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "indigo",
          "synonyms": []
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "índigo",
          "synonyms": []
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "indigo",
          "synonyms": []
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Value.Violet",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "violet",
          "synonyms": []
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "morado",
          "synonyms": [
            "violeta"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "violet",
          "synonyms": []
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Location.All",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "everywhere",
          "synonyms": [
            "all"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "en todas partes",
          "synonyms": [
            "todo"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "partout",
          "synonyms": [
            "tous"
          ]
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Location.Driver",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "driver",
          "synonyms": [
            "front driver",
            "driver side"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "conductor",
          "synonyms": [
            "conductor delantero"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "conducteur",
          "synonyms": [
            "conducteur avant"
          ]
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Location.Passenger",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "passenger",
          "synonyms": [
            "front passenger",
            "passenger side"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "pasajero",
          "synonyms": [
            "pasajero delantero"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "passager",
          "synonyms": [
            "passager avant"
          ]
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Location.Left",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "left",
          "synonyms": [
            "left side"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "izquierda",
          "synonyms": []
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "gauche",
          "synonyms": []
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Location.Right",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "right",
          "synonyms": [
            "right side"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "derecha",
          "synonyms": []
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "droit",
          "synonyms": []
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Location.RearDriver",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "rear driver",
          "synonyms": [
            "back driver"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "conductor trasero",
          "synonyms": [
            "conductor posterior"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "conducteur arrière",
          "synonyms": [
          ]
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Location.RearPassenger",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "rear passenger",
          "synonyms": [
            "back passenger"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "pasajero trasero",
          "synonyms": [
            "pasajero posterior"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "passager arrière",
          "synonyms": [
          ]
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Location.Front",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "front",
          "synonyms": []
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "frente",
          "synonyms": [
            "adelante",
            "enfrente"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "avant",
          "synonyms": []
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Location.Rear",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "rear",
          "synonyms": [
            "back"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "parte posterior",
          "synonyms": [
            "atrás",
            "trasera"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "arrière",
          "synonyms": [
            "derrière"
          ]
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Location.DriverRow",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "driver row",
          "synonyms": []
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "fila del conductor",
          "synonyms": [
            "fila del piloto"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "rangée conducteur",
          "synonyms": []
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Location.PassengerRow",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "passenger row",
          "synonyms": []
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "fila del pasajero",
          "synonyms": []
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "rangée passagers",
          "synonyms": []
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Location.FirstRow",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "first row",
          "synonyms": [
            "1st row"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "primera fila",
          "synonyms": [
            "1.° fila"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "première rangée",
          "synonyms": [
            "1re rangée"
          ]
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Location.SecondRow",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "second row",
          "synonyms": [
            "2nd row"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "segunda fila",
          "synonyms": [
            "2.° fila"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "deuxième rangée",
          "synonyms": [
            "2e rangée"
          ]
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Location.ThirdRow",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "third row",
          "synonyms": [
            "3rd row"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "tercera fila",
          "synonyms": [
            "3.° fila"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "troisième rangée",
          "synonyms": [
            "3e rangée"
          ]
        }
      ]
    },
    {
      "assetId": "Alexa.Automotive.Location.FourthRow",
      "values": [
        {
          "locales": [
            "en-US",
            "en-CA"
          ],
          "defaultValue": "fourth row",
          "synonyms": [
            "4th row"
          ]
        },
        {
          "locales": [
            "es-MX",
            "es-US"
          ],
          "defaultValue": "cuarta fila",
          "synonyms": [
            "4ta fila"
          ]
        },
        {
          "locales": [
            "fr-CA"
          ],
          "defaultValue": "atrième rangée",
          "synonyms": [
            "4e rangée"
          ]
        }
      ]
    }
  ]
})";

#endif // AACE_ENGINE_CAR_CONTROL_ASSETS_DEFAULT_H
