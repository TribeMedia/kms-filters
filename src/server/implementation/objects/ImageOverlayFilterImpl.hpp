/* Autogenerated with kurento-module-creator */

#ifndef __IMAGE_OVERLAY_FILTER_IMPL_HPP__
#define __IMAGE_OVERLAY_FILTER_IMPL_HPP__

#include "FilterImpl.hpp"
#include "ImageOverlayFilter.hpp"
#include <EventHandler.hpp>
#include <boost/property_tree/ptree.hpp>

namespace kurento
{
class ImageOverlayFilterImpl;
} /* kurento */

namespace kurento
{
void Serialize (std::shared_ptr<kurento::ImageOverlayFilterImpl> &object,
                JsonSerializer &serializer);
} /* kurento */

namespace kurento
{
class MediaPipelineImpl;
} /* kurento */

namespace kurento
{

class ImageOverlayFilterImpl : public FilterImpl,
  public virtual ImageOverlayFilter
{

public:

  ImageOverlayFilterImpl (const boost::property_tree::ptree &config,
                          std::shared_ptr<MediaPipeline> mediaPipeline);

  virtual ~ImageOverlayFilterImpl () {};

  void removeImage (const std::string &id);
  void addImage (const std::string &id, const std::string &uri,
                 float offsetXPercent, float offsetYPercent, float widthPercent,
                 float heightPercent, bool keepAspectRatio, bool center);

  /* Next methods are automatically implemented by code generator */
  virtual bool connect (const std::string &eventType,
                        std::shared_ptr<EventHandler> handler);
  virtual void invoke (std::shared_ptr<MediaObjectImpl> obj,
                       const std::string &methodName, const Json::Value &params,
                       Json::Value &response);

  virtual void Serialize (JsonSerializer &serializer);

private:

  GstElement *imageOverlay;

  class StaticConstructor
  {
  public:
    StaticConstructor();
  };

  static StaticConstructor staticConstructor;

};

} /* kurento */

#endif /*  __IMAGE_OVERLAY_FILTER_IMPL_HPP__ */
