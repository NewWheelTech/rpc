#pragma once

enum class MaterialParams {
	MATERIAL_MODE,
	BASE_WEIGHT,
	BASE_COLOR,
	REFLECTIVITY,
	ROUGHNESS,
	ROUGHNESS_INVERSION,
	METALNESS,
	REFLECTION_COLOR,
	DIFF_ROUGHNESS,
	BRDF_MODE,
	BRDF_LOW,
	BRDF_HIGH,
	BRDF_CURVE,
	ANISOTROPY,
	ANISOANGLE,
	ANISO_MODE,
	ANISO_CHANNEL,
	TRANSPARENCY,
	TRANSPARENCY_COLOR,
	TRANSPARENCY_DEPTH,
	TRANSPARENCY_IOR,
	TRANSPARENCY_ROUGHNESS_LOCK,
	TRANSPARENCY_ROUGHNESS,
	TRANSPARENCY_ROUGHNESS_INVERSION,
	THIN_WALLED,
	SCATTERING,
	SSS_COLOR,
	SSS_DEPTH,
	SSS_SCALE,
	SSS_SCATTER_COLOR,
	EMISSION,
	EMISSION_COLOR,
	EMISSION_LUMINANCE,
	EMISSION_COLOR_PRESET,
	EMISSION_KELVIN,
	COATING,
	COAT_COLOR,
	COAT_ROUGHNESS,
	COAT_ROUGHNESS_INV,
	COAT_AFFECT_COLOR,
	COAT_AFFECT_ROUGHNESS,
	COAT_IOR
};

enum class MaterialMaps {
	BASE_WEIGHT_MAP,
	BASE_COLOR_MAP,
	REFLECTIVITY_MAP,
	REFL_COLOR_MAP,
	ROUGHNESS_MAP,
	METALNESS_MAP,
	DIFF_ROUGH_MAP,
	ANISOTROPY_MAP,
	ANISO_ANGLE_MAP,
	TRANSPARENCY_MAP,
	TRANSPARENCY_COLOR_MAP,
	TRANSPARENCY_ROUGH_MAP,
	TRANSPARENCY_IOR_MAP,
	SCATTERING_MAP,
	SSS_COLOR_MAP,
	SSS_SCALE_MAP,
	EMISSION_MAP,
	EMISSION_COLOR_MAP,
	COAT_MAP,
	COAT_COLOR_MAP,
	COAT_ROUGH_MAP,
	BUMP_MAP,
	COAT_BUMP_MAP,
	DISPLACEMENT_MAP,
	CUTOUT_MAP
};

const RPCapi::TStringArg getParamName(MaterialParams param);
const RPCapi::TStringArg getMapName(MaterialMaps param);