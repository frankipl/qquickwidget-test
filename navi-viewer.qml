import QtQuick 2.6
import QtPositioning 5.8
import QtLocation 5.8

Item {

    Rectangle {
        id:topRect
        anchors.fill: parent

        Map {
            id: naviMap
            objectName: "naviMapObject"
            anchors.fill: parent
            plugin: Plugin { name: "osm"
                PluginParameter { name: "osm.useragent"; value: "My great Qt OSM application" }
            }
            zoomLevel: 15
        }
    }
}
