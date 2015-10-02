


	// ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
        #ifndef RECMASHELLFILEEXPORTERADAPTER_H
        #define RECMASHELLFILEEXPORTERADAPTER_H

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RFileExporterAdapter.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class REcmaShellFileExporterAdapter : public RFileExporterAdapter {

        public:
      
    // Destructor:
    
            ~REcmaShellFileExporterAdapter();
        static RFileExporterAdapter* getSelf(const QString& fName, QScriptContext* context)
    ;static REcmaShellFileExporterAdapter* getSelfShell(const QString& fName, QScriptContext* context)
    ;
    
    
    // Constructors:
    
      REcmaShellFileExporterAdapter(
                
            );
        
      REcmaShellFileExporterAdapter(
                RDocument & document, RMessageHandler * messageHandler
        = NULL, RProgressHandler * progressHandler
        = NULL
            );
        
    
    
      QString getCorrectedFileName(
                const QString & fileName, const QString & nameFilter
            );
        
    
    
      bool exportFile(
                const QString & fileName, const QString & nameFilter, bool setFileName
        = true
            );
        
    
    
      void exportPoint(
                const RPoint & arg1
            );
        
    
    
      void exportArcSegment(
                const RArc & arg1, bool arg2
        = false
            );
        
    
    
      void exportLineSegment(
                const RLine & arg1, double arg2
        = RNANDOUBLE
            );
        
    
    
      void exportTriangle(
                const RTriangle & arg1
            );
        
    
    
      void exportXLine(
                const RXLine & arg1
            );
        
    
    
      double getLineTypePatternScale(
                const RLinetypePattern & p
            );
        
    
  
        // methods of 1st level base class RFileExporter:
        
            // methods of 2nd level base class RExporter:
            
      QString getErrorMessage(
                
            );
        
    
      void setLayerSource(
                RDocument * ls
            );
        
    
      void setBlockSource(
                RDocument * bs
            );
        
    
      void setProjectionRenderingHint(
                RS::ProjectionRenderingHint p
            );
        
    
      RS::ProjectionRenderingHint getProjectionRenderingHint(
                
            );
        
    
      void setPen(
                const QPen & pen
            );
        
    
      QPen getPen(
                const RPainterPath & path
            );
        
      QPen getPen(
                
            );
        
    
      void setBrush(
                const QBrush & brush
            );
        
    
      QBrush getBrush(
                const RPainterPath & path
            );
        
      QBrush getBrush(
                
            );
        
    
      void setEntityAttributes(
                bool forceSelected
        = false
            );
        
    
      void setStyle(
                Qt::PenStyle penStyle
            );
        
    
      void setBrushStyle(
                Qt::BrushStyle brushStyle
            );
        
    
      void setDashPattern(
                const QVector < qreal > & dashes
            );
        
    
      void setColor(
                float r, float g, float b, float a
        = 1.0f
            );
        
      void setColor(
                const RColor & color
            );
        
    
      void setLineweight(
                RLineweight::Lineweight weight
            );
        
    
      void setLinetypeId(
                RLinetype::Id ltId
            );
        
    
      void setLinetypePattern(
                const RLinetypePattern & ltPattern
            );
        
    
      RLinetypePattern getLinetypePattern(
                
            );
        
    
      REntity * getBlockRefOrEntity(
                
            );
        
    
      REntity * getEntity(
                
            );
        
    
      REntity * getCurrentBlockRef(
                
            );
        
    
      bool isEntitySelected(
                
            );
        
    
      void startExport(
                
            );
        
    
      void endExport(
                
            );
        
    
      bool exportDocument(
                
            );
        
    
      bool exportDocumentSettings(
                
            );
        
    
      void exportDocumentSetting(
                const QString & arg1, const QVariant & arg2
            );
        
    
      void exportLayers(
                
            );
        
    
      void exportBlocks(
                
            );
        
    
      void exportViews(
                
            );
        
    
      void exportLinetypes(
                
            );
        
    
      void exportLayer(
                RLayer & arg1
            );
        
      void exportLayer(
                RLayer::Id layerId
            );
        
    
      void exportBlock(
                RBlock & arg1
            );
        
      void exportBlock(
                RBlock::Id blockId
            );
        
    
      void exportView(
                RView & arg1
            );
        
      void exportView(
                RView::Id viewId
            );
        
    
      void exportLinetype(
                RLinetype & arg1
            );
        
    
      void exportEntities(
                bool allBlocks
        = true, bool undone
        = false
            );
        
      void exportEntities(
                const RBox & box
            );
        
      void exportEntities(
                QSet < REntity::Id > & entityIds, bool allBlocks
        = true
            );
        
    
      void exportEntity(
                REntity & e, bool preview
        = false, bool allBlocks
        = true, bool forceSelected
        = false
            );
        
      void exportEntity(
                REntity::Id entityId, bool allBlocks
        = true, bool forceSelected
        = false
            );
        
    
      void startEntity(
                bool arg1
            );
        
    
      void endEntity(
                
            );
        
    
      void exportCurrentEntity(
                bool preview
        = false, bool forceSelected
        = false
            );
        
    
      void unexportEntity(
                REntity::Id entityId
            );
        
    
      void exportShapes(
                const QList < QSharedPointer < RShape > > & shapes
            );
        
    
      void exportShape(
                QSharedPointer < RShape > shape
            );
        
    
      void exportShapeSegment(
                QSharedPointer < RShape > shape
            );
        
    
      double exportLine(
                const RLine & line, double offset
        = RNANDOUBLE
            );
        
    
      void exportRay(
                const RRay & ray
            );
        
    
      void exportCircle(
                const RCircle & circle
            );
        
    
      void exportArc(
                const RArc & arc, double offset
        = RNANDOUBLE
            );
        
    
      void exportEllipse(
                const REllipse & ellipse, double offset
        = RNANDOUBLE
            );
        
    
      void exportPolyline(
                const RPolyline & polyline, bool polylineGen
        = true, double offset
        = RNANDOUBLE
            );
        
    
      void exportSpline(
                const RSpline & spline, double offset
        = RNANDOUBLE
            );
        
    
      void exportSplineSegment(
                const RSpline & spline
            );
        
    
      void exportPainterPaths(
                const QList < RPainterPath > & paths
            );
        
      void exportPainterPaths(
                const QList < RPainterPath > & paths, double angle, const RVector & pos
            );
        
    
      void exportBoundingBoxPaths(
                const QList < RPainterPath > & paths
            );
        
    
      void exportImage(
                const RImageData & image, bool forceSelected
        = false
            );
        
    
      QList < RPainterPath > exportText(
                const RTextBasedData & text, bool forceSelected
        = false
            );
        
    
      void exportThickPolyline(
                const RPolyline & polyline
            );
        
    
      void exportQuad(
                const RVector & p1, const RVector & p2, const RVector & p3, const RVector & p4
            );
        
    
      void exportVerticalQuad(
                const RVector & p1, const RVector & p2, double height
            );
        
    
      void exportBox(
                const RBox & box
            );
        
    
      void exportRectangle(
                const RVector & p1, const RVector & p2
            );
        
    
      QStack < REntity * > getEntityStack(
                
            );
        
    
      void setDraftMode(
                bool on
            );
        
    
      void toggleDraftMode(
                
            );
        
    
      bool getDraftMode(
                
            );
        
    
      void setTwoColorSelectedMode(
                bool on
            );
        
    
      bool getTwoColorSelectedMode(
                
            );
        
    
      void setScreenBasedLinetypes(
                bool on
            );
        
    
      void toggleScreenBasedLinetypes(
                
            );
        
    
      bool getScreenBasedLinetypes(
                
            );
        
    
      bool isVisualExporter(
                
            );
        
    
      void setVisualExporter(
                bool on
            );
        
    
      double getPixelSizeHint(
                
            );
        
    
      void setPixelSizeHint(
                double v
            );
        
    
      bool getPixelUnit(
                
            );
        
    
      void setPixelUnit(
                bool on
            );
        
    

    // protected methods (only available for ECMA shell classes) (generated by xsl2xpp.xsl):
	QScriptValue __qtscript_self;
            };
            Q_DECLARE_METATYPE(REcmaShellFileExporterAdapter*)
        
	#endif
    