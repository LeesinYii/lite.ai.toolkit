//
// Created by DefTruth on 2021/8/8.
//

#ifndef LITE_AI_MODELS_H
#define LITE_AI_MODELS_H

#include "backend.h"

// ENABLE_ONNXRUNTIME
#ifdef ENABLE_ONNXRUNTIME

#include "lite/ort/core/ort_core.h"
#include "lite/ort/core/ort_utils.h"
#include "lite/ort/cv/age_googlenet.h"
#include "lite/ort/cv/glint_arcface.h"
#include "lite/ort/cv/colorizer.h"
#include "lite/ort/cv/deeplabv3_resnet101.h"
#include "lite/ort/cv/densenet.h"
#include "lite/ort/cv/efficientnet_lite4.h"
#include "lite/ort/cv/emotion_ferplus.h"
#include "lite/ort/cv/fast_style_transfer.h"
#include "lite/ort/cv/fcn_resnet101.h"
#include "lite/ort/cv/fsanet.h"
#include "lite/ort/cv/gender_googlenet.h"
#include "lite/ort/cv/ghostnet.h"
#include "lite/ort/cv/hardnet.h"
#include "lite/ort/cv/ibnnet.h"
#include "lite/ort/cv/mobilenetv2.h"
#include "lite/ort/cv/pfld.h"
#include "lite/ort/cv/resnet.h"
#include "lite/ort/cv/resnext.h"
#include "lite/ort/cv/shufflenetv2.h"
#include "lite/ort/cv/ssd.h"
#include "lite/ort/cv/ssd_mobilenetv1.h"
#include "lite/ort/cv/ssrnet.h"
#include "lite/ort/cv/subpixel_cnn.h"
#include "lite/ort/cv/tiny_yolov3.h"
#include "lite/ort/cv/ultraface.h"
#include "lite/ort/cv/vgg16_age.h"
#include "lite/ort/cv/vgg16_gender.h"
#include "lite/ort/cv/yolov3.h"
#include "lite/ort/cv/yolov4.h"
#include "lite/ort/cv/yolov5.h"
#include "lite/ort/cv/glint_cosface.h"
#include "lite/ort/cv/glint_partial_fc.h"
#include "lite/ort/cv/facenet.h"
#include "lite/ort/cv/focal_arcface.h"
#include "lite/ort/cv/focal_asia_arcface.h"
#include "lite/ort/cv/tencent_cifp_face.h"
#include "lite/ort/cv/tencent_curricular_face.h"
#include "lite/ort/cv/center_loss_face.h"
#include "lite/ort/cv/sphere_face.h"
#include "lite/ort/cv/pose_robust_face.h"
#include "lite/ort/cv/naive_pose_robust_face.h"
#include "lite/ort/cv/mobile_facenet.h"
#include "lite/ort/cv/cava_ghost_arcface.h"
#include "lite/ort/cv/cava_combined_face.h"
#include "lite/ort/cv/yolox.h"
#include "lite/ort/cv/mobilese_focal_face.h"
#include "lite/ort/cv/efficient_emotion7.h"
#include "lite/ort/cv/efficient_emotion8.h"
#include "lite/ort/cv/mobile_emotion7.h"
#include "lite/ort/cv/rexnet_emotion7.h"
#include "lite/ort/cv/pfld98.h"
#include "lite/ort/cv/pfld68.h"
#include "lite/ort/cv/mobilenetv2_68.h"
#include "lite/ort/cv/mobilenetv2_se_68.h"
#include "lite/ort/cv/face_landmarks_1000.h"
#include "lite/ort/cv/retinaface.h"
#include "lite/ort/cv/faceboxes.h"
#include "lite/ort/cv/tiny_yolov4_voc.h"
#include "lite/ort/cv/tiny_yolov4_coco.h"
#include "lite/ort/cv/yolor.h"
#include "lite/ort/cv/scaled_yolov4.h"
#include "lite/ort/cv/efficientdet.h"
#include "lite/ort/cv/efficientdet_d7.h"
#include "lite/ort/cv/efficientdet_d8.h"
#include "lite/ort/cv/yolop.h"
#include "lite/ort/cv/rvm.h"
#include "lite/ort/cv/nanodet.h"
#include "lite/ort/cv/nanodet_efficientnet_lite.h"
#include "lite/ort/cv/yolox_v0.1.1.h"
#include "lite/ort/cv/yolov5_v6.0.h"
#include "lite/ort/cv/mg_matting.h"
#include "lite/ort/cv/nanodet_plus.h"

#endif

// ENABLE_MNN
#ifdef ENABLE_MNN

#include "lite/mnn/core/mnn_core.h"
#include "lite/mnn/core/mnn_utils.h"
#include "lite/mnn/cv/mnn_nanodet.h"
#include "lite/mnn/cv/mnn_nanodet_efficientnet_lite.h"
#include "lite/mnn/cv/mnn_rvm.h"
#include "lite/mnn/cv/mnn_yolox.h"
#include "lite/mnn/cv/mnn_yolop.h"
#include "lite/mnn/cv/mnn_yolov5.h"
#include "lite/mnn/cv/mnn_yolox_v0.1.1.h"
#include "lite/mnn/cv/mnn_yolor.h"
#include "lite/mnn/cv/mnn_yolov5_v6.0.h"
#include "lite/mnn/cv/mnn_glint_arcface.h"
#include "lite/mnn/cv/mnn_glint_cosface.h"
#include "lite/mnn/cv/mnn_glint_partial_fc.h"
#include "lite/mnn/cv/mnn_facenet.h"
#include "lite/mnn/cv/mnn_focal_arcface.h"
#include "lite/mnn/cv/mnn_focal_asia_arcface.h"
#include "lite/mnn/cv/mnn_tencent_curricular_face.h"
#include "lite/mnn/cv/mnn_tencent_cifp_face.h"
#include "lite/mnn/cv/mnn_center_loss_face.h"
#include "lite/mnn/cv/mnn_sphere_face.h"
#include "lite/mnn/cv/mnn_mobile_facenet.h"
#include "lite/mnn/cv/mnn_cava_ghost_arcface.h"
#include "lite/mnn/cv/mnn_cava_combined_face.h"
#include "lite/mnn/cv/mnn_mobilese_focal_face.h"
#include "lite/mnn/cv/mnn_ultraface.h"
#include "lite/mnn/cv/mnn_retinaface.h"
#include "lite/mnn/cv/mnn_faceboxes.h"
#include "lite/mnn/cv/mnn_face_landmarks_1000.h"
#include "lite/mnn/cv/mnn_pfld.h"
#include "lite/mnn/cv/mnn_pfld68.h"
#include "lite/mnn/cv/mnn_pfld98.h"
#include "lite/mnn/cv/mnn_mobilenetv2_68.h"
#include "lite/mnn/cv/mnn_mobilenetv2_se_68.h"
#include "lite/mnn/cv/mnn_fsanet.h"
#include "lite/mnn/cv/mnn_age_googlenet.h"
#include "lite/mnn/cv/mnn_gender_googlenet.h"
#include "lite/mnn/cv/mnn_emotion_ferplus.h"
#include "lite/mnn/cv/mnn_efficient_emotion7.h"
#include "lite/mnn/cv/mnn_efficient_emotion8.h"
#include "lite/mnn/cv/mnn_ssrnet.h"
#include "lite/mnn/cv/mnn_mobile_emotion7.h"
#include "lite/mnn/cv/mnn_rexnet_emotion7.h"
#include "lite/mnn/cv/mnn_efficientnet_lite4.h"
#include "lite/mnn/cv/mnn_shufflenetv2.h"
#include "lite/mnn/cv/mnn_densenet.h"
#include "lite/mnn/cv/mnn_ghostnet.h"
#include "lite/mnn/cv/mnn_hdrdnet.h"
#include "lite/mnn/cv/mnn_ibnnet.h"
#include "lite/mnn/cv/mnn_mobilenetv2.h"
#include "lite/mnn/cv/mnn_resnet.h"
#include "lite/mnn/cv/mnn_resnext.h"
#include "lite/mnn/cv/mnn_deeplabv3_resnet101.h"
#include "lite/mnn/cv/mnn_fcn_resnet101.h"
#include "lite/mnn/cv/mnn_colorizer.h"
#include "lite/mnn/cv/mnn_fast_style_transfer.h"
#include "lite/mnn/cv/mnn_subpixel_cnn.h"
#include "lite/mnn/cv/mnn_mg_matting.h"
#include "lite/mnn/cv/mnn_nanodet_plus.h"

#endif

// ENABLE_NCNN
#ifdef ENABLE_NCNN

#include "lite/ncnn/core/ncnn_core.h"
#include "lite/ncnn/core/ncnn_utils.h"
#include "lite/ncnn/cv/ncnn_nanodet.h"
#include "lite/ncnn/cv/ncnn_nanodet_efficientnet_lite.h"
#include "lite/ncnn/cv/ncnn_nanodet_depreciated.h"
#include "lite/ncnn/cv/ncnn_nanodet_efficientdet_lite_depreciated.h"
#include "lite/ncnn/cv/ncnn_rvm.h"
#include "lite/ncnn/cv/ncnn_yolox.h"
#include "lite/ncnn/cv/ncnn_yolop.h"
#include "lite/ncnn/cv/ncnn_yolov5.h"
#include "lite/ncnn/cv/ncnn_yolox_v0.1.1.h"
#include "lite/ncnn/cv/ncnn_yolor.h"
#include "lite/ncnn/cv/ncnn_yolor_ssss.h"
#include "lite/ncnn/cv/ncnn_yolov5_v6.0.h"
#include "lite/ncnn/cv/ncnn_yolov5_v6.0_p6.h"
#include "lite/ncnn/cv/ncnn_glint_arcface.h"
#include "lite/ncnn/cv/ncnn_glint_cosface.h"
#include "lite/ncnn/cv/ncnn_glint_partial_fc.h"
#include "lite/ncnn/cv/ncnn_facenet.h"
#include "lite/ncnn/cv/ncnn_focal_arcface.h"
#include "lite/ncnn/cv/ncnn_focal_asia_arcface.h"
#include "lite/ncnn/cv/ncnn_tencent_curricular_face.h"
#include "lite/ncnn/cv/ncnn_tencent_cifp_face.h"
#include "lite/ncnn/cv/ncnn_center_loss_face.h"
#include "lite/ncnn/cv/ncnn_sphere_face.h"
#include "lite/ncnn/cv/ncnn_mobile_facenet.h"
#include "lite/ncnn/cv/ncnn_cava_ghost_arcface.h"
#include "lite/ncnn/cv/ncnn_cava_combined_face.h"
#include "lite/ncnn/cv/ncnn_mobilese_focal_face.h"
#include "lite/ncnn/cv/ncnn_ultraface.h"
#include "lite/ncnn/cv/ncnn_retinaface.h"
#include "lite/ncnn/cv/ncnn_faceboxes.h"
#include "lite/ncnn/cv/ncnn_face_landmarks_1000.h"
#include "lite/ncnn/cv/ncnn_pfld.h"
#include "lite/ncnn/cv/ncnn_pfld68.h"
#include "lite/ncnn/cv/ncnn_pfld98.h"
#include "lite/ncnn/cv/ncnn_mobilenetv2_68.h"
#include "lite/ncnn/cv/ncnn_mobilenetv2_se_68.h"
#include "lite/ncnn/cv/ncnn_age_googlenet.h"
#include "lite/ncnn/cv/ncnn_gender_googlenet.h"
#include "lite/ncnn/cv/ncnn_emotion_ferplus.h"
#include "lite/ncnn/cv/ncnn_efficient_emotion7.h"
#include "lite/ncnn/cv/ncnn_efficient_emotion8.h"
#include "lite/ncnn/cv/ncnn_mobile_emotion7.h"
#include "lite/ncnn/cv/ncnn_efficientnet_lite4.h"
#include "lite/ncnn/cv/ncnn_shufflenetv2.h"
#include "lite/ncnn/cv/ncnn_densenet.h"
#include "lite/ncnn/cv/ncnn_ghostnet.h"
#include "lite/ncnn/cv/ncnn_hdrdnet.h"
#include "lite/ncnn/cv/ncnn_ibnnet.h"
#include "lite/ncnn/cv/ncnn_mobilenetv2.h"
#include "lite/ncnn/cv/ncnn_resnet.h"
#include "lite/ncnn/cv/ncnn_resnext.h"
#include "lite/ncnn/cv/ncnn_deeplabv3_resnet101.h"
#include "lite/ncnn/cv/ncnn_fcn_resnet101.h"
#include "lite/ncnn/cv/ncnn_colorizer.h"
#include "lite/ncnn/cv/ncnn_fast_style_transfer.h"
#include "lite/ncnn/cv/ncnn_subpixel_cnn.h"
#include "lite/ncnn/cv/ncnn_nanodet_plus.h"

#endif

// ENABLE_TNN
#ifdef ENABLE_TNN

#include "lite/tnn/core/tnn_core.h"
#include "lite/tnn/core/tnn_utils.h"
#include "lite/tnn/cv/tnn_yolox.h"
#include "lite/tnn/cv/tnn_rvm.h"
#include "lite/tnn/cv/tnn_yolop.h"
#include "lite/tnn/cv/tnn_nanodet.h"
#include "lite/tnn/cv/tnn_nanodet_efficientnet_lite.h"
#include "lite/tnn/cv/tnn_yolov5.h"
#include "lite/tnn/cv/tnn_yolox_v0.1.1.h"
#include "lite/tnn/cv/tnn_yolor.h"
#include "lite/tnn/cv/tnn_yolov5_v6.0.h"
#include "lite/tnn/cv/tnn_glint_arcface.h"
#include "lite/tnn/cv/tnn_glint_cosface.h"
#include "lite/tnn/cv/tnn_glint_partial_fc.h"
#include "lite/tnn/cv/tnn_facenet.h"
#include "lite/tnn/cv/tnn_focal_arcface.h"
#include "lite/tnn/cv/tnn_focal_asia_arcface.h"
#include "lite/tnn/cv/tnn_tencent_curricular_face.h"
#include "lite/tnn/cv/tnn_tencent_cifp_face.h"
#include "lite/tnn/cv/tnn_center_loss_face.h"
#include "lite/tnn/cv/tnn_sphere_face.h"
#include "lite/tnn/cv/tnn_mobile_facenet.h"
#include "lite/tnn/cv/tnn_cava_ghost_arcface.h"
#include "lite/tnn/cv/tnn_cava_combined_face.h"
#include "lite/tnn/cv/tnn_mobilese_focal_face.h"
#include "lite/tnn/cv/tnn_ultraface.h"
#include "lite/tnn/cv/tnn_retinaface.h"
#include "lite/tnn/cv/tnn_faceboxes.h"
#include "lite/tnn/cv/tnn_face_landmarks_1000.h"
#include "lite/tnn/cv/tnn_pfld.h"
#include "lite/tnn/cv/tnn_pfld68.h"
#include "lite/tnn/cv/tnn_pfld98.h"
#include "lite/tnn/cv/tnn_mobilenetv2_68.h"
#include "lite/tnn/cv/tnn_mobilenetv2_se_68.h"
#include "lite/tnn/cv/tnn_fsanet.h"
#include "lite/tnn/cv/tnn_age_googlenet.h"
#include "lite/tnn/cv/tnn_gender_googlenet.h"
#include "lite/tnn/cv/tnn_emotion_ferplus.h"
#include "lite/tnn/cv/tnn_efficient_emotion7.h"
#include "lite/tnn/cv/tnn_efficient_emotion8.h"
#include "lite/tnn/cv/tnn_ssrnet.h"
#include "lite/tnn/cv/tnn_mobile_emotion7.h"
#include "lite/tnn/cv/tnn_rexnet_emotion7.h"
#include "lite/tnn/cv/tnn_efficientnet_lite4.h"
#include "lite/tnn/cv/tnn_shufflenetv2.h"
#include "lite/tnn/cv/tnn_densenet.h"
#include "lite/tnn/cv/tnn_ghostnet.h"
#include "lite/tnn/cv/tnn_hdrdnet.h"
#include "lite/tnn/cv/tnn_ibnnet.h"
#include "lite/tnn/cv/tnn_mobilenetv2.h"
#include "lite/tnn/cv/tnn_resnet.h"
#include "lite/tnn/cv/tnn_resnext.h"
#include "lite/tnn/cv/tnn_deeplabv3_resnet101.h"
#include "lite/tnn/cv/tnn_fcn_resnet101.h"
#include "lite/tnn/cv/tnn_colorizer.h"
#include "lite/tnn/cv/tnn_fast_style_transfer.h"
#include "lite/tnn/cv/tnn_subpixel_cnn.h"
#include "lite/tnn/cv/tnn_mg_matting.h"
#include "lite/tnn/cv/tnn_nanodet_plus.h"

#endif

// Default Engine ONNXRuntime
namespace lite
{
  namespace cv
  {
#ifdef BACKEND_ONNXRUNTIME
    typedef ortcv::FSANet _FSANet;
    typedef ortcv::PFLD _PFLD;
    typedef ortcv::UltraFace _UltraFace;
    typedef ortcv::AgeGoogleNet _AgeGoogleNet;
    typedef ortcv::GenderGoogleNet _GenderGoogleNet;
    typedef ortcv::EmotionFerPlus _EmotionFerPlus;
    typedef ortcv::VGG16Age _VGG16Age;
    typedef ortcv::VGG16Gender _VGG16Gender;
    typedef ortcv::SSRNet _SSRNet;
    typedef ortcv::FastStyleTransfer _FastStyleTransfer;
    typedef ortcv::GlintArcFace _GlintArcFace;
    typedef ortcv::Colorizer _Colorizer;
    typedef ortcv::SubPixelCNN _SubPixelCNN;
    typedef ortcv::YoloV4 _YoloV4;
    typedef ortcv::YoloV3 _YoloV3;
    typedef ortcv::YoloV5 _YoloV5;
    typedef ortcv::EfficientNetLite4 _EfficientNetLite4;
    typedef ortcv::ShuffleNetV2 _ShuffleNetV2;
    typedef ortcv::TinyYoloV3 _TinyYoloV3;
    typedef ortcv::SSD _SSD;
    typedef ortcv::SSDMobileNetV1 _SSDMobileNetV1;
    typedef ortcv::DeepLabV3ResNet101 _DeepLabV3ResNet101;
    typedef ortcv::DenseNet _DenseNet;
    typedef ortcv::FCNResNet101 _FCNResNet101;
    typedef ortcv::GhostNet _GhostNet;
    typedef ortcv::HdrDNet _HdrDNet;
    typedef ortcv::IBNNet _IBNNet;
    typedef ortcv::MobileNetV2 _MobileNetV2;
    typedef ortcv::ResNet _ResNet;
    typedef ortcv::ResNeXt _ResNeXt;
    typedef ortcv::GlintCosFace _GlintCosFace;
    typedef ortcv::GlintPartialFC _GlintPartialFC;
    typedef ortcv::FaceNet _FaceNet;
    typedef ortcv::FocalArcFace _FocalArcFace;
    typedef ortcv::FocalAsiaArcFace _FocalAsiaArcFace;
    typedef ortcv::TencentCifpFace _TencentCifpFace;
    typedef ortcv::TencentCurricularFace _TencentCurricularFace;
    typedef ortcv::CenterLossFace _CenterLossFace;
    typedef ortcv::SphereFace _SphereFace;
    typedef ortcv::PoseRobustFace _PoseRobustFace;
    typedef ortcv::NaivePoseRobustFace _NaivePoseRobustFace;
    typedef ortcv::MobileFaceNet _MobileFaceNet;
    typedef ortcv::CavaGhostArcFace _CavaGhostArcFace;
    typedef ortcv::CavaCombinedFace _CavaCombinedFace;
    typedef ortcv::YoloX _YoloX;
    typedef ortcv::MobileSEFocalFace _MobileSEFocalFace;
    typedef ortcv::EfficientEmotion7 _EfficientEmotion7;
    typedef ortcv::EfficientEmotion8 _EfficientEmotion8;
    typedef ortcv::MobileEmotion7 _MobileEmotion7;
    typedef ortcv::ReXNetEmotion7 _ReXNetEmotion7;
    typedef ortcv::PFLD98 _PFLD98;
    typedef ortcv::PFLD68 _PFLD68;
    typedef ortcv::MobileNetV268 _MobileNetV268;
    typedef ortcv::MobileNetV2SE68 _MobileNetV2SE68;
    typedef ortcv::FaceLandmark1000 _FaceLandmark1000;
    typedef ortcv::RetinaFace _RetinaFace;
    typedef ortcv::FaceBoxes _FaceBoxes;
    typedef ortcv::TinyYoloV4VOC _TinyYoloV4VOC;
    typedef ortcv::TinyYoloV4COCO _TinyYoloV4COCO;
    typedef ortcv::YoloR _YoloR;
    typedef ortcv::ScaledYoloV4 _ScaledYoloV4;
    typedef ortcv::EfficientDet _EfficientDet;
    typedef ortcv::EfficientDetD7 _EfficientDetD7;
    typedef ortcv::EfficientDetD8 _EfficientDetD8;
    typedef ortcv::YOLOP _YOLOP;
    typedef ortcv::RobustVideoMatting _RobustVideoMatting;
    typedef ortcv::NanoDet _NanoDet;
    typedef ortcv::NanoDetEfficientNetLite _NanoDetEfficientNetLite;
    typedef ortcv::YoloX_V_0_1_1 _YoloX_V_0_1_1;
    typedef ortcv::YoloV5_V_6_0 _YoloV5_V_6_0;
    typedef ortcv::MGMatting _MGMatting;
    typedef ortcv::NanoDetPlus _NanoDetPlus;
#endif

    // 1. classification
    namespace classification
    {
#ifdef BACKEND_ONNXRUNTIME
      typedef _EfficientNetLite4 EfficientNetLite4;
      typedef _ShuffleNetV2 ShuffleNetV2;
      typedef _DenseNet DenseNet;
      typedef _GhostNet GhostNet;
      typedef _HdrDNet HdrDNet;
      typedef _IBNNet IBNNet;
      typedef _MobileNetV2 MobileNetV2;
      typedef _ResNet ResNet;
      typedef _ResNeXt ResNeXt;
#endif
    }

    // 2. general object detection
    namespace detection
    {
#ifdef BACKEND_ONNXRUNTIME
      typedef _YoloV3 YoloV3;
      typedef _YoloV4 YoloV4;
      typedef _YoloV5 YoloV5;
      typedef _TinyYoloV3 TinyYoloV3;
      typedef _SSD SSD;
      typedef _SSDMobileNetV1 SSDMobileNetV1;
      typedef _YoloX YoloX;
      typedef _TinyYoloV4VOC TinyYoloV4VOC;
      typedef _TinyYoloV4COCO TinyYoloV4COCO;
      typedef _YoloR YoloR;
      typedef _ScaledYoloV4 ScaledYoloV4;
      typedef _EfficientDet EfficientDet;
      typedef _EfficientDetD7 EfficientDetD7;
      typedef _EfficientDetD8 EfficientDetD8;
      typedef _YOLOP YOLOP;
      typedef _NanoDet NanoDet;
      typedef _NanoDetEfficientNetLite NanoDetEfficientNetLite;
      typedef _YoloX_V_0_1_1 YoloX_V_0_1_1;
      typedef _YoloV5_V_6_0 YoloV5_V_6_0;
      typedef _NanoDetPlus NanoDetPlus;
#endif
    }
    // 3. face detection & facial attributes detection
    namespace face
    {
#ifdef BACKEND_ONNXRUNTIME
      typedef _FSANet FSANet; // head pose estimation.
      typedef _UltraFace UltraFace;  // face detection.
      typedef _PFLD PFLD; // facial landmarks detection.
      typedef _AgeGoogleNet AgeGoogleNet; // age estimation
      typedef _GenderGoogleNet GenderGoogleNet; // gender estimation
      typedef _VGG16Age VGG16Age; // age estimation
      typedef _VGG16Gender VGG16Gender; // gender estimation
      typedef _EmotionFerPlus EmotionFerPlus; // emotion detection
      typedef _SSRNet SSRNet; // age estimation
      typedef _EfficientEmotion7 EfficientEmotion7;
      typedef _EfficientEmotion8 EfficientEmotion8;
      typedef _MobileEmotion7 MobileEmotion7;
      typedef _ReXNetEmotion7 ReXNetEmotion7;
      typedef _PFLD98 PFLD98;
      typedef _PFLD68 PFLD68;
      typedef _MobileNetV268 MobileNetV268;
      typedef _MobileNetV2SE68 MobileNetV2SE68;
      typedef _FaceLandmark1000 FaceLandmark1000;
      typedef _RetinaFace RetinaFace;
      typedef _FaceBoxes FaceBoxes;
#endif
      namespace detect
      {
#ifdef BACKEND_ONNXRUNTIME
        typedef _UltraFace UltraFace;  // face detection.
        typedef _RetinaFace RetinaFace;
        typedef _FaceBoxes FaceBoxes;
#endif
      }

      namespace align
      {
#ifdef BACKEND_ONNXRUNTIME
        typedef _PFLD PFLD; // facial landmarks detection. 106 points
        typedef _PFLD98 PFLD98; // 98 points
        typedef _PFLD68 PFLD68; // 68 points
        typedef _MobileNetV268 MobileNetV268; // 68 points
        typedef _MobileNetV2SE68 MobileNetV2SE68; // 68 points
        typedef _FaceLandmark1000 FaceLandmark1000; // 1000 points
#endif
      }

      namespace pose
      {
#ifdef BACKEND_ONNXRUNTIME
        typedef _FSANet FSANet; // head pose estimation.
#endif
      }

      namespace attr
      {
#ifdef BACKEND_ONNXRUNTIME
        typedef _AgeGoogleNet AgeGoogleNet; // age estimation
        typedef _GenderGoogleNet GenderGoogleNet; // gender estimation
        typedef _VGG16Age VGG16Age; // age estimation
        typedef _VGG16Gender VGG16Gender; // gender estimation
        typedef _EmotionFerPlus EmotionFerPlus; // emotion detection
        typedef _SSRNet SSRNet; // age estimation
        typedef _EfficientEmotion7 EfficientEmotion7;
        typedef _EfficientEmotion8 EfficientEmotion8;
        typedef _MobileEmotion7 MobileEmotion7;
        typedef _ReXNetEmotion7 ReXNetEmotion7;
#endif
      }

    }
    // 4. face recognition
    namespace faceid
    {
#ifdef BACKEND_ONNXRUNTIME
      typedef _GlintArcFace GlintArcFace; //
      typedef _GlintCosFace GlintCosFace; //
      typedef _GlintPartialFC GlintPartialFC;
      typedef _FaceNet FaceNet;
      typedef _FocalArcFace FocalArcFace;
      typedef _FocalAsiaArcFace FocalAsiaArcFace;
      typedef _TencentCurricularFace TencentCurricularFace;
      typedef _TencentCifpFace TencentCifpFace;
      typedef _CenterLossFace CenterLossFace;
      typedef _SphereFace SphereFace;
      typedef _PoseRobustFace PoseRobustFace;
      typedef _NaivePoseRobustFace NaivePoseRobustFace;
      typedef _MobileFaceNet MobileFaceNet;
      typedef _CavaGhostArcFace CavaGhostArcFace;
      typedef _CavaCombinedFace CavaCombinedFace;
      typedef _MobileSEFocalFace MobileSEFocalFace;
#endif

    }
    // 5. segmentation
    namespace segmentation
    {
#ifdef BACKEND_ONNXRUNTIME
      typedef _DeepLabV3ResNet101 DeepLabV3ResNet101;
      typedef _FCNResNet101 FCNResNet101;
#endif

    }
    // 6. reid
    namespace reid
    {
#ifdef BACKEND_ONNXRUNTIME
#endif
    }

    // 7. ocr
    namespace ocr
    {
#ifdef BACKEND_ONNXRUNTIME
#endif
    }
    // 8. neural rendering
    namespace render
    {
#ifdef BACKEND_ONNXRUNTIME
#endif
    }
    // 9. style transfer
    namespace style
    {
#ifdef BACKEND_ONNXRUNTIME
      typedef _FastStyleTransfer FastStyleTransfer;
#endif
    }

    // 10. colorization
    namespace colorization
    {
#ifdef BACKEND_ONNXRUNTIME
      typedef _Colorizer Colorizer;
#endif
    }
    // 11. super resolution
    namespace resolution
    {
#ifdef BACKEND_ONNXRUNTIME
      typedef _SubPixelCNN SubPixelCNN;
#endif
    }
    // 12. image & face & human matting
    namespace matting
    {
#ifdef BACKEND_ONNXRUNTIME
      typedef _RobustVideoMatting RobustVideoMatting;
      typedef _MGMatting MGMatting;
#endif
    }
  }

  namespace asr
  {
#ifdef BACKEND_ONNXRUNTIME
#endif
  }

  namespace nlp
  {
#ifdef BACKEND_ONNXRUNTIME
#endif
  }
}

// models for mobile device
namespace lite
{
  namespace mobile
  {
    // classification
    namespace classification
    {
    }
    // object detection
    namespace detection
    {
    }
    // face etc.
    namespace face
    {
      namespace detect
      {
      }
      namespace align
      {
      }
      namespace pose
      {
      }
      namespace attr
      {
      }
    }
    // face recognition
    namespace faceid
    {
    }
    // segmentation
    namespace segmentation
    {
    }
    // reid
    namespace reid
    {
    }
    // ocr
    namespace ocr
    {
    }
    // matting
    namespace matting
    {
    }

  }
}

// ONNXRuntime version
namespace lite
{
#ifdef ENABLE_ONNXRUNTIME
  namespace onnxruntime
  {
    namespace cv
    {
      typedef ortcv::FSANet _ONNXFSANet;
      typedef ortcv::PFLD _ONNXPFLD;
      typedef ortcv::UltraFace _ONNXUltraFace;
      typedef ortcv::AgeGoogleNet _ONNXAgeGoogleNet;
      typedef ortcv::GenderGoogleNet _ONNXGenderGoogleNet;
      typedef ortcv::EmotionFerPlus _ONNXEmotionFerPlus;
      typedef ortcv::VGG16Age _ONNXVGG16Age;
      typedef ortcv::VGG16Gender _ONNXVGG16Gender;
      typedef ortcv::SSRNet _ONNXSSRNet;
      typedef ortcv::FastStyleTransfer _ONNXFastStyleTransfer;
      typedef ortcv::GlintArcFace _ONNXGlintArcFace;
      typedef ortcv::Colorizer _ONNXColorizer;
      typedef ortcv::SubPixelCNN _ONNXSubPixelCNN;
      typedef ortcv::YoloV4 _ONNXYoloV4;
      typedef ortcv::YoloV3 _ONNXYoloV3;
      typedef ortcv::YoloV5 _ONNXYoloV5;
      typedef ortcv::EfficientNetLite4 _ONNXEfficientNetLite4;
      typedef ortcv::ShuffleNetV2 _ONNXShuffleNetV2;
      typedef ortcv::TinyYoloV3 _ONNXTinyYoloV3;
      typedef ortcv::SSD _ONNXSSD;
      typedef ortcv::SSDMobileNetV1 _ONNXSSDMobileNetV1;
      typedef ortcv::DeepLabV3ResNet101 _ONNXDeepLabV3ResNet101;
      typedef ortcv::DenseNet _ONNXDenseNet;
      typedef ortcv::FCNResNet101 _ONNXFCNResNet101;
      typedef ortcv::GhostNet _ONNXGhostNet;
      typedef ortcv::HdrDNet _ONNXHdrDNet;
      typedef ortcv::IBNNet _ONNXIBNNet;
      typedef ortcv::MobileNetV2 _ONNXMobileNetV2;
      typedef ortcv::ResNet _ONNXResNet;
      typedef ortcv::ResNeXt _ONNXResNeXt;
      typedef ortcv::GlintCosFace _ONNXGlintCosFace;
      typedef ortcv::GlintPartialFC _ONNXGlintPartialFC;
      typedef ortcv::FaceNet _ONNXFaceNet;
      typedef ortcv::FocalArcFace _ONNXFocalArcFace;
      typedef ortcv::FocalAsiaArcFace _ONNXFocalAsiaArcFace;
      typedef ortcv::TencentCifpFace _ONNXTencentCifpFace;
      typedef ortcv::TencentCurricularFace _ONNXTencentCurricularFace;
      typedef ortcv::CenterLossFace _ONNXCenterLossFace;
      typedef ortcv::SphereFace _ONNXSphereFace;
      typedef ortcv::PoseRobustFace _ONNXPoseRobustFace;
      typedef ortcv::NaivePoseRobustFace _ONNXNaivePoseRobustFace;
      typedef ortcv::MobileFaceNet _ONNXMobileFaceNet;
      typedef ortcv::CavaGhostArcFace _ONNXCavaGhostArcFace;
      typedef ortcv::CavaCombinedFace _ONNXCavaCombinedFace;
      typedef ortcv::YoloX _ONNXYoloX;
      typedef ortcv::MobileSEFocalFace _ONNXMobileSEFocalFace;
      typedef ortcv::EfficientEmotion7 _ONNXEfficientEmotion7;
      typedef ortcv::EfficientEmotion8 _ONNXEfficientEmotion8;
      typedef ortcv::MobileEmotion7 _ONNXMobileEmotion7;
      typedef ortcv::ReXNetEmotion7 _ONNXReXNetEmotion7;
      typedef ortcv::PFLD98 _ONNXPFLD98;
      typedef ortcv::PFLD68 _ONNXPFLD68;
      typedef ortcv::MobileNetV268 _ONNXMobileNetV268;
      typedef ortcv::MobileNetV2SE68 _ONNXMobileNetV2SE68;
      typedef ortcv::FaceLandmark1000 _ONNXFaceLandmark1000;
      typedef ortcv::RetinaFace _ONNXRetinaFace;
      typedef ortcv::FaceBoxes _ONNXFaceBoxes;
      typedef ortcv::TinyYoloV4VOC _ONNXTinyYoloV4VOC;
      typedef ortcv::TinyYoloV4COCO _ONNXTinyYoloV4COCO;
      typedef ortcv::YoloR _ONNXYoloR;
      typedef ortcv::ScaledYoloV4 _ONNXScaledYoloV4;
      typedef ortcv::EfficientDet _ONNXEfficientDet;
      typedef ortcv::EfficientDetD7 _ONNXEfficientDetD7;
      typedef ortcv::EfficientDetD8 _ONNXEfficientDetD8;
      typedef ortcv::YOLOP _ONNXYOLOP;
      typedef ortcv::RobustVideoMatting _ONNXRobustVideoMatting;
      typedef ortcv::NanoDet _ONNXNanoDet;
      typedef ortcv::NanoDetEfficientNetLite _ONNXNanoDetEfficientNetLite;
      typedef ortcv::YoloX_V_0_1_1 _ONNXYoloX_V_0_1_1;
      typedef ortcv::YoloV5_V_6_0 _ONNXYoloV5_V_6_0;
      typedef ortcv::MGMatting _ONNXMGMatting;
      typedef ortcv::NanoDetPlus _ONNXNanoDetPlus;


      // 1. classification
      namespace classification
      {
        typedef _ONNXEfficientNetLite4 EfficientNetLite4;
        typedef _ONNXShuffleNetV2 ShuffleNetV2;
        typedef _ONNXDenseNet DenseNet;
        typedef _ONNXGhostNet GhostNet;
        typedef _ONNXHdrDNet HdrDNet;
        typedef _ONNXIBNNet IBNNet;
        typedef _ONNXMobileNetV2 MobileNetV2;
        typedef _ONNXResNet ResNet;
        typedef _ONNXResNeXt ResNeXt;
      }

      // 2. general object detection
      namespace detection
      {
        typedef _ONNXYoloV3 YoloV3;
        typedef _ONNXYoloV4 YoloV4;
        typedef _ONNXYoloV5 YoloV5;
        typedef _ONNXTinyYoloV3 TinyYoloV3;
        typedef _ONNXSSD SSD;
        typedef _ONNXSSDMobileNetV1 SSDMobileNetV1;
        typedef _ONNXYoloX YoloX;
        typedef _ONNXTinyYoloV4VOC TinyYoloV4VOC;
        typedef _ONNXTinyYoloV4COCO TinyYoloV4COCO;
        typedef _ONNXYoloR YoloR;
        typedef _ONNXScaledYoloV4 ScaledYoloV4;
        typedef _ONNXEfficientDet EfficientDet;
        typedef _ONNXEfficientDetD7 EfficientDetD7;
        typedef _ONNXEfficientDetD8 EfficientDetD8;
        typedef _ONNXYOLOP YOLOP;
        typedef _ONNXNanoDet NanoDet;
        typedef _ONNXNanoDetEfficientNetLite NanoDetEfficientNetLite;
        typedef _ONNXYoloX_V_0_1_1 YoloX_V_0_1_1;
        typedef _ONNXYoloV5_V_6_0 YoloV5_V_6_0;
        typedef _ONNXNanoDetPlus NanoDetPlus;
      }
      // 3. face detection & facial attributes detection
      namespace face
      {
        typedef _ONNXFSANet FSANet; // head pose estimation.
        typedef _ONNXUltraFace UltraFace;  // face detection.
        typedef _ONNXPFLD PFLD; // facial landmarks detection.
        typedef _ONNXAgeGoogleNet AgeGoogleNet; // age estimation
        typedef _ONNXGenderGoogleNet GenderGoogleNet; // gender estimation
        typedef _ONNXVGG16Age VGG16Age; // age estimation
        typedef _ONNXVGG16Gender VGG16Gender; // gender estimation
        typedef _ONNXEmotionFerPlus EmotionFerPlus; // emotion detection
        typedef _ONNXSSRNet SSRNet; // age estimation
        typedef _ONNXEfficientEmotion7 EfficientEmotion7;
        typedef _ONNXEfficientEmotion8 EfficientEmotion8;
        typedef _ONNXMobileEmotion7 MobileEmotion7;
        typedef _ONNXReXNetEmotion7 ReXNetEmotion7;
        typedef _ONNXPFLD98 PFLD98;
        typedef _ONNXPFLD68 PFLD68;
        typedef _ONNXMobileNetV268 MobileNetV268;
        typedef _ONNXMobileNetV2SE68 MobileNetV2SE68;
        typedef _ONNXFaceLandmark1000 FaceLandmark1000;
        typedef _ONNXRetinaFace RetinaFace;
        typedef _ONNXFaceBoxes FaceBoxes;

        namespace detect
        {
          typedef _ONNXUltraFace UltraFace;  // face detection.
          typedef _ONNXRetinaFace RetinaFace;
          typedef _ONNXFaceBoxes FaceBoxes;
        }

        namespace align
        {
          typedef _ONNXPFLD PFLD; // facial landmarks detection. 106 points
          typedef _ONNXPFLD98 PFLD98; // 98 points
          typedef _ONNXPFLD68 PFLD68; // 68 points
          typedef _ONNXMobileNetV268 MobileNetV268; // 68 points
          typedef _ONNXMobileNetV2SE68 MobileNetV2SE68; // 68 points
          typedef _ONNXFaceLandmark1000 FaceLandmark1000; // 1000 points
        }

        namespace pose
        {
          typedef _ONNXFSANet FSANet; // head pose estimation.
        }

        namespace attr
        {
          typedef _ONNXAgeGoogleNet AgeGoogleNet; // age estimation
          typedef _ONNXGenderGoogleNet GenderGoogleNet; // gender estimation
          typedef _ONNXVGG16Age VGG16Age; // age estimation
          typedef _ONNXVGG16Gender VGG16Gender; // gender estimation
          typedef _ONNXEmotionFerPlus EmotionFerPlus; // emotion detection
          typedef _ONNXSSRNet SSRNet; // age estimation
          typedef _ONNXEfficientEmotion7 EfficientEmotion7;
          typedef _ONNXEfficientEmotion8 EfficientEmotion8;
          typedef _ONNXMobileEmotion7 MobileEmotion7;
          typedef _ONNXReXNetEmotion7 ReXNetEmotion7;
        }
      }
      // 4. face recognition
      namespace faceid
      {
        typedef _ONNXGlintArcFace GlintArcFace; //
        typedef _ONNXGlintCosFace GlintCosFace; //
        typedef _ONNXGlintPartialFC GlintPartialFC;
        typedef _ONNXFaceNet FaceNet;
        typedef _ONNXFocalArcFace FocalArcFace;
        typedef _ONNXFocalAsiaArcFace FocalAsiaArcFace;
        typedef _ONNXTencentCifpFace TencentCifpFace;
        typedef _ONNXTencentCurricularFace TencentCurricularFace;
        typedef _ONNXCenterLossFace CenterLossFace;
        typedef _ONNXSphereFace SphereFace;
        typedef _ONNXPoseRobustFace PoseRobustFace;
        typedef _ONNXNaivePoseRobustFace NaivePoseRobustFace;
        typedef _ONNXMobileFaceNet MobileFaceNet;
        typedef _ONNXCavaGhostArcFace CavaGhostArcFace;
        typedef _ONNXCavaCombinedFace CavaCombinedFace;
        typedef _ONNXMobileSEFocalFace MobileSEFocalFace;

      }
      // 5. segmentation
      namespace segmentation
      {
        typedef _ONNXDeepLabV3ResNet101 DeepLabV3ResNet101;
        typedef _ONNXFCNResNet101 FCNResNet101;

      }
      // 6. reid
      namespace reid
      {

      }

      // 7. ocr
      namespace ocr
      {

      }
      // 8. neural rendering
      namespace render
      {

      }
      // 9. style transfer
      namespace style
      {
        typedef _ONNXFastStyleTransfer FastStyleTransfer;
      }

      // 10. colorization
      namespace colorization
      {
        typedef _ONNXColorizer Colorizer;
      }
      // 11. super resolution
      namespace resolution
      {
        typedef _ONNXSubPixelCNN SubPixelCNN;
      }
      // 12. image & face & human matting
      namespace matting
      {
        typedef _ONNXRobustVideoMatting RobustVideoMatting;
        typedef _ONNXMGMatting MGMatting;
      }

    }

  }
#endif
}

// MNN version
namespace lite
{
#ifdef ENABLE_MNN
  namespace mnn
  {
    namespace cv
    {
      // classification
      namespace classification
      {
        typedef mnncv::MNNEfficientNetLite4 EfficientNetLite4;
        typedef mnncv::MNNShuffleNetV2 ShuffleNetV2;
        typedef mnncv::MNNDenseNet DenseNet;
        typedef mnncv::MNNGhostNet GhostNet;
        typedef mnncv::MNNHdrDNet HdrDNet;
        typedef mnncv::MNNIBNNet IBNNet;
        typedef mnncv::MNNMobileNetV2 MobileNetV2;
        typedef mnncv::MNNResNet ResNet;
        typedef mnncv::MNNResNeXt ResNeXt;
      }
      // object detection
      namespace detection
      {
        typedef mnncv::MNNNanoDet NanoDet;
        typedef mnncv::MNNNanoDetEfficientNetLite NanoDetEfficientNetLite;
        typedef mnncv::MNNYoloX YoloX;
        typedef mnncv::MNNYOLOP YOLOP;
        typedef mnncv::MNNYoloV5 YoloV5;
        typedef mnncv::MNNYoloX_V_0_1_1 YoloX_V_0_1_1;
        typedef mnncv::MNNYoloR YoloR;
        typedef mnncv::MNNYoloV5_V_6_0 YoloV5_V_6_0;
        typedef mnncv::MNNNanoDetPlus NanoDetPlus;
      }
      // face etc.
      namespace face
      {
        namespace detect
        {
          typedef mnncv::MNNUltraFace UltraFace;
          typedef mnncv::MNNRetinaFace RetinaFace;
          typedef mnncv::MNNFaceBoxes FaceBoxes;
        }
        namespace align
        {
          typedef mnncv::MNNFaceLandmark1000 FaceLandmark1000;
          typedef mnncv::MNNPFLD PFLD;
          typedef mnncv::MNNPFLD68 PFLD68;
          typedef mnncv::MNNPFLD98 PFLD98;
          typedef mnncv::MNNMobileNetV268 MobileNetV268;
          typedef mnncv::MNNMobileNetV2SE68 MobileNetV2SE68;
        }
        namespace pose
        {
          typedef mnncv::MNNFSANet FSANet;
        }
        namespace attr
        {
          typedef mnncv::MNNAgeGoogleNet AgeGoogleNet;
          typedef mnncv::MNNGenderGoogleNet GenderGoogleNet;
          typedef mnncv::MNNEmotionFerPlus EmotionFerPlus;
          typedef mnncv::MNNSSRNet SSRNet;
          typedef mnncv::MNNEfficientEmotion7 EfficientEmotion7;
          typedef mnncv::MNNEfficientEmotion8 EfficientEmotion8;
          typedef mnncv::MNNMobileEmotion7 MobileEmotion7;
          typedef mnncv::MNNReXNetEmotion7 ReXNetEmotion7;
        }
      }
      // face recognition
      namespace faceid
      {
        typedef mnncv::MNNGlintArcFace GlintArcFace;
        typedef mnncv::MNNGlintCosFace GlintCosFace;
        typedef mnncv::MNNGlintPartialFC GlintPartialFC;
        typedef mnncv::MNNFaceNet FaceNet;
        typedef mnncv::MNNFocalArcFace FocalArcFace;
        typedef mnncv::MNNFocalAsiaArcFace FocalAsiaArcFace;
        typedef mnncv::MNNTencentCurricularFace TencentCurricularFace;
        typedef mnncv::MNNTencentCifpFace TencentCifpFace;
        typedef mnncv::MNNCenterLossFace CenterLossFace;
        typedef mnncv::MNNSphereFace SphereFace;
        typedef mnncv::MNNMobileFaceNet MobileFaceNet;
        typedef mnncv::MNNCavaGhostArcFace CavaGhostArcFace;
        typedef mnncv::MNNCavaCombinedFace CavaCombinedFace;
        typedef mnncv::MNNMobileSEFocalFace MobileSEFocalFace;
      }
      // segmentation
      namespace segmentation
      {
        typedef mnncv::MNNDeepLabV3ResNet101 DeepLabV3ResNet101;
        typedef mnncv::MNNFCNResNet101 FCNResNet101;
      }
      // reid
      namespace reid
      {
      }
      // ocr
      namespace ocr
      {
      }
      // matting
      namespace matting
      {
        typedef mnncv::MNNRobustVideoMatting RobustVideoMatting;
        typedef mnncv::MNNMGMatting MGMatting;
      }

      // style transfer
      namespace style
      {
        typedef mnncv::MNNFastStyleTransfer FastStyleTransfer;
      }

      // colorization
      namespace colorization
      {
        typedef mnncv::MNNColorizer Colorizer;
      }
      // super resolution
      namespace resolution
      {
        typedef mnncv::MNNSubPixelCNN SubPixelCNN;
      }

    } // namespace cv

  }
#endif
}

// NCNN version
namespace lite
{
#ifdef ENABLE_NCNN
  namespace ncnn
  {
    namespace cv
    {
      // classification
      namespace classification
      {
        typedef ncnncv::NCNNEfficientNetLite4 EfficientNetLite4;
        typedef ncnncv::NCNNShuffleNetV2 ShuffleNetV2;
        typedef ncnncv::NCNNDenseNet DenseNet;
        typedef ncnncv::NCNNGhostNet GhostNet;
        typedef ncnncv::NCNNHdrDNet HdrDNet;
        typedef ncnncv::NCNNIBNNet IBNNet;
        typedef ncnncv::NCNNMobileNetV2 MobileNetV2;
        typedef ncnncv::NCNNResNet ResNet;
        typedef ncnncv::NCNNResNeXt ResNeXt;
      }
      // object detection
      namespace detection
      {
        typedef ncnncv::NCNNNanoDet NanoDet;
        typedef ncnncv::NCNNNanoDetEfficientNetLite NanoDetEfficientNetLite;
        typedef ncnncv::NCNNNanoDetDepreciated NanoDetDepreciated;
        typedef ncnncv::NCNNNanoDetEfficientNetLiteDepreciated NanoDetEfficientNetLiteDepreciated;
        typedef ncnncv::NCNNYoloX YoloX;
        typedef ncnncv::NCNNYOLOP YOLOP;
        typedef ncnncv::NCNNYoloV5 YoloV5;
        typedef ncnncv::NCNNYoloX_V_0_1_1 YoloX_V_0_1_1;
        typedef ncnncv::NCNNYoloR YoloR;
        typedef ncnncv::NCNNYoloRssss YoloRssss;
        typedef ncnncv::NCNNYoloV5_V_6_0 YoloV5_V_6_0;
        typedef ncnncv::NCNNYoloV5_V_6_0_P6 YoloV5_V_6_0_P6;
        typedef ncnncv::NCNNNanoDetPlus NanoDetPlus;
      }
      // face etc.
      namespace face
      {
        namespace detect
        {
          typedef ncnncv::NCNNUltraFace UltraFace;
          typedef ncnncv::NCNNRetinaFace RetinaFace;
          typedef ncnncv::NCNNFaceBoxes FaceBoxes;
        }
        namespace align
        {
          typedef ncnncv::NCNNFaceLandmark1000 FaceLandmark1000;
          typedef ncnncv::NCNNPFLD PFLD;
          typedef ncnncv::NCNNPFLD68 PFLD68;
          typedef ncnncv::NCNNPFLD98 PFLD98;
          typedef ncnncv::NCNNMobileNetV268 MobileNetV268;
          typedef ncnncv::NCNNMobileNetV2SE68 MobileNetV2SE68;
        }
        namespace pose
        {
        }
        namespace attr
        {
          typedef ncnncv::NCNNAgeGoogleNet AgeGoogleNet;
          typedef ncnncv::NCNNGenderGoogleNet GenderGoogleNet;
          typedef ncnncv::NCNNEmotionFerPlus EmotionFerPlus;
          typedef ncnncv::NCNNEfficientEmotion7 EfficientEmotion7;
          typedef ncnncv::NCNNEfficientEmotion8 EfficientEmotion8;
          typedef ncnncv::NCNNMobileEmotion7 MobileEmotion7;
        }
      }
      // face recognition
      namespace faceid
      {
        typedef ncnncv::NCNNGlintArcFace GlintArcFace;
        typedef ncnncv::NCNNGlintCosFace GlintCosFace;
        typedef ncnncv::NCNNGlintPartialFC GlintPartialFC;
        typedef ncnncv::NCNNFaceNet FaceNet;
        typedef ncnncv::NCNNFocalArcFace FocalArcFace;
        typedef ncnncv::NCNNFocalAsiaArcFace FocalAsiaArcFace;
        typedef ncnncv::NCNNTencentCurricularFace TencentCurricularFace;
        typedef ncnncv::NCNNTencentCifpFace TencentCifpFace;
        typedef ncnncv::NCNNCenterLossFace CenterLossFace;
        typedef ncnncv::NCNNSphereFace SphereFace;
        typedef ncnncv::NCNNMobileFaceNet MobileFaceNet;
        typedef ncnncv::NCNNCavaGhostArcFace CavaGhostArcFace;
        typedef ncnncv::NCNNCavaCombinedFace CavaCombinedFace;
        typedef ncnncv::NCNNMobileSEFocalFace MobileSEFocalFace;
      }
      // segmentation
      namespace segmentation
      {
        typedef ncnncv::NCNNDeepLabV3ResNet101 DeepLabV3ResNet101;
        typedef ncnncv::NCNNFCNResNet101 FCNResNet101;
      }
      // reid
      namespace reid
      {
      }
      // ocr
      namespace ocr
      {
      }
      // matting
      namespace matting
      {
        typedef ncnncv::NCNNRobustVideoMatting RobustVideoMatting;
      }
      // style transfer
      namespace style
      {
        typedef ncnncv::NCNNFastStyleTransfer FastStyleTransfer;
      }

      // colorization
      namespace colorization
      {
        typedef ncnncv::NCNNColorizer Colorizer;
      }
      // super resolution
      namespace resolution
      {
        typedef ncnncv::NCNNSubPixelCNN SubPixelCNN;
      }

    } // namespace cv

  }
#endif
}

// TNN version
namespace lite
{
#ifdef ENABLE_TNN
  namespace tnn
  {
    namespace cv
    {
      // classification
      namespace classification
      {
        typedef tnncv::TNNEfficientNetLite4 EfficientNetLite4;
        typedef tnncv::TNNShuffleNetV2 ShuffleNetV2;
        typedef tnncv::TNNDenseNet DenseNet;
        typedef tnncv::TNNGhostNet GhostNet;
        typedef tnncv::TNNHdrDNet HdrDNet;
        typedef tnncv::TNNIBNNet IBNNet;
        typedef tnncv::TNNMobileNetV2 MobileNetV2;
        typedef tnncv::TNNResNet ResNet;
        typedef tnncv::TNNResNeXt ResNeXt;
      }
      // object detection
      namespace detection
      {
        typedef tnncv::TNNYoloX YoloX;
        typedef tnncv::TNNYOLOP YOLOP;
        typedef tnncv::TNNNanoDet NanoDet;
        typedef tnncv::TNNNanoDetEfficientNetLite NanoDetEfficientNetLite;
        typedef tnncv::TNNYoloV5 YoloV5;
        typedef tnncv::TNNYoloX_V_0_1_1 YoloX_V_0_1_1;
        typedef tnncv::TNNYoloR YoloR;
        typedef tnncv::TNNYoloV5_V_6_0 YoloV5_V_6_0;
        typedef tnncv::TNNNanoDetPlus NanoDetPlus;
      }
      // face etc.
      namespace face
      {
        namespace detect
        {
          typedef tnncv::TNNUltraFace UltraFace;
          typedef tnncv::TNNRetinaFace RetinaFace;
          typedef tnncv::TNNFaceBoxes FaceBoxes;
        }
        namespace align
        {
          typedef tnncv::TNNFaceLandmark1000 FaceLandmark1000;
          typedef tnncv::TNNPFLD PFLD;
          typedef tnncv::TNNPFLD68 PFLD68;
          typedef tnncv::TNNPFLD98 PFLD98;
          typedef tnncv::TNNMobileNetV268 MobileNetV268;
          typedef tnncv::TNNMobileNetV2SE68 MobileNetV2SE68;
        }
        namespace pose
        {
          typedef tnncv::TNNFSANet FSANet;
        }
        namespace attr
        {
          typedef tnncv::TNNAgeGoogleNet AgeGoogleNet;
          typedef tnncv::TNNGenderGoogleNet GenderGoogleNet;
          typedef tnncv::TNNEmotionFerPlus EmotionFerPlus;
          typedef tnncv::TNNSSRNet SSRNet;
          typedef tnncv::TNNEfficientEmotion7 EfficientEmotion7;
          typedef tnncv::TNNEfficientEmotion8 EfficientEmotion8;
          typedef tnncv::TNNMobileEmotion7 MobileEmotion7;
          typedef tnncv::TNNReXNetEmotion7 ReXNetEmotion7;
        }
      }
      // face recognition
      namespace faceid
      {
        typedef tnncv::TNNGlintArcFace GlintArcFace;
        typedef tnncv::TNNGlintCosFace GlintCosFace;
        typedef tnncv::TNNGlintPartialFC GlintPartialFC;
        typedef tnncv::TNNFaceNet FaceNet;
        typedef tnncv::TNNFocalArcFace FocalArcFace;
        typedef tnncv::TNNFocalAsiaArcFace FocalAsiaArcFace;
        typedef tnncv::TNNTencentCurricularFace TencentCurricularFace;
        typedef tnncv::TNNTencentCifpFace TencentCifpFace;
        typedef tnncv::TNNCenterLossFace CenterLossFace;
        typedef tnncv::TNNSphereFace SphereFace;
        typedef tnncv::TNNMobileFaceNet MobileFaceNet;
        typedef tnncv::TNNCavaGhostArcFace CavaGhostArcFace;
        typedef tnncv::TNNCavaCombinedFace CavaCombinedFace;
        typedef tnncv::TNNMobileSEFocalFace MobileSEFocalFace;
      }
      // segmentation
      namespace segmentation
      {
        typedef tnncv::TNNDeepLabV3ResNet101 DeepLabV3ResNet101;
        typedef tnncv::TNNFCNResNet101 FCNResNet101;
      }
      // reid
      namespace reid
      {
      }
      // ocr
      namespace ocr
      {
      }
      // matting
      namespace matting
      {
        typedef tnncv::TNNRobustVideoMatting RobustVideoMatting;
        typedef tnncv::TNNMGMatting MGMatting;
      }
      // style transfer
      namespace style
      {
        typedef tnncv::TNNFastStyleTransfer FastStyleTransfer;
      }

      // colorization
      namespace colorization
      {
        typedef tnncv::TNNColorizer Colorizer;
      }
      // super resolution
      namespace resolution
      {
        typedef tnncv::TNNSubPixelCNN SubPixelCNN;
      }

    } // namespace cv
  }
#endif
}

#endif //LITE_AI_MODELS_H
