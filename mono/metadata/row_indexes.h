
#ifndef __MONO_METADATA_ROW_INDEXES_H__
#define __MONO_METADATA_ROW_INDEXES_H__

/*
 * The last entry in the enum is used to give the number
 * of columns in the row.
 */

enum {
	META_ASSEMBLY_HASH_ALG,
	META_ASSEMBLY_MAJOR_VERSION,
	META_ASSEMBLY_MINOR_VERSION,
	META_ASSEMBLY_BUILD_NUMBER,
	META_ASSEMBLY_REV_NUMBER,
	META_ASSEMBLY_FLAGS,
	META_ASSEMBLY_PUBLIC_KEY,
	META_ASSEMBLY_NAME,
	META_ASSEMBLY_CULTURE,
	META_ASSEMBLY_SIZE
};

enum {
	META_ASSEMBLYOS_PLATFORM,
	META_ASSEMBLYOS_MAJOR_VERSION,
	META_ASSEMBLYOS_MINOR_VERSION,
	META_ASSEMBLYOS_SIZE
};

enum {
	META_ASSEMBLY_PROCESSOR,
	META_ASSEMBLY_PROCESSOR_SIZE
};

enum {
	META_ASSEMBLYREF_MAJOR_VERSION,
	META_ASSEMBLYREF_MINOR_VERSION,
	META_ASSEMBLYREF_BUILD_NUMBER,
	META_ASSEMBLYREF_REV_NUMBER,
	META_ASSEMBLYREF_FLAGS,
	META_ASSEMBLYREF_PUBLIC_KEY,
	META_ASSEMBLYREF_NAME,
	META_ASSEMBLYREF_CULTURE,
	META_ASSEMBLYREF_HASH_VALUE,
	META_ASSEMBLYREF_SIZE
};

enum {
	META_ASSEMBLYREFOS_PLATFORM,
	META_ASSEMBLYREFOS_MAJOR_VERSION,
	META_ASSEMBLYREFOS_MINOR_VERSION,
	META_ASSEMBLYREFOS_ASSEMBLYREF,
	META_ASSEMBLYREFOS_SIZE
};

enum {
	META_ASSEMBLYREFPROC_PROCESSOR,
	META_ASSEMBLYREFPROC_ASSEMBLYREF,
	META_ASSEMBLYREFPROC_SIZE
};

enum {
	META_CLASS_LAYOUT_PACKING_SIZE,
	META_CLASS_LAYOUT_CLASS_SIZE,
	META_CLASS_LAYOUT_PARENT,
	META_CLASS_LAYOUT_SIZE
};

enum {
	META_CONSTANT_TYPE,
	META_CONSTANT_PADDING,
	META_CONSTANT_PARENT,
	META_CONSTANT_VALUE,
	META_CONSTANT_SIZE
};

enum {
	META_CUSTOM_ATTR_PARENT,
	META_CUSTOM_ATTR_TYPE,
	META_CUSTOM_ATTR_VALUE,
	META_CUSTOM_ATTR_SIZE
};

enum {
	META_DECL_SECURITY_ACTION,
	META_DECL_SECURITY_PARENT,
	META_DECL_SECURITY_PERMISSIONSET,
	META_DECL_SECURITY_SIZE
};

enum {
	META_EVENT_MAP_PARENT,
	META_EVENT_MAP_EVENTLIST,
	META_EVENT_MAP_SIZE
};

enum {
	META_EVENT_FLAGS,
	META_EVENT_NAME,
	META_EVENT_TYPE,
	META_EVENT_SIZE
};

enum {
	META_EXP_TYPE_FLAGS,
	META_EXP_TYPE_TYPEDEF,
	META_EXP_TYPE_NAME,
	META_EXP_TYPE_NAMESPACE,
	META_EXP_TYPE_IMPLEMENTATION,
	META_EXP_TYPE_SIZE
};

enum {
	META_FIELD_FLAGS,
	META_FIELD_NAME,
	META_FIELD_SIGNATURE,
	META_FIELD_SIZE
};

enum {
	META_FIELD_LAYOUT_OFFSET,
	META_FIELD_LAYOUT_FIELD,
	META_FIELD_LAYOUT_SIZE
};

enum {
	META_FIELD_MARSHAL_PARENT,
	META_FIELD_MARSHAL_NATIVE_TYPE,
	META_FIELD_MARSHAL_SIZE
};

enum {
	META_FIELD_RVA_RVA,
	META_FIELD_RVA_FIELD,
	META_FIELD_RVA_SIZE
};

enum {
	META_FILE_FLAGS,
	META_FILE_NAME,
	META_FILE_HASH_VALUE,
	META_FILE_SIZE
};

enum {
	META_IMPLMAP_FLAGS,
	META_IMPLMAP_MEMBER,
	META_IMPLMAP_NAME,
	META_IMPLMAP_SCOPE,
	META_IMPLMAP_SIZE
};

enum {
	META_INTERFACEIMPL_CLASS,
	META_INTERFACEIMPL_INTERFACE,
	META_INTERFACEIMPL_SIZE
};

enum {
	META_MANIFEST_OFFSET,
	META_MANIFEST_FLAGS,
	META_MANIFEST_NAME,
	META_MANIFEST_IMPLEMENTATION,
	META_MANIFEST_SIZE
};

enum {
	META_MEMBERREF_CLASS,
	META_MEMBERREF_NAME,
	META_MEMBERREF_SIGNATURE,
	META_MEMBERREF_SIZE
};

enum {
	META_METHOD_RVA,
	META_METHOD_IMPLFALGS,
	META_METHOD_FLAGS,
	META_METHOD_NAME,
	META_METHOD_SIGNATURE,
	META_METHOD_PARAMLIST,
	META_METHOD_SIZE
};

enum {
	META_MTHODIMPL_CLASS,
	META_MTHODIMPL_BODY,
	META_MTHODIMPL_DECLARATION,
	META_MTHODIMPL_SIZE
};

enum {
	META_METHOD_SEMA_SEMANTICS,
	META_METHOD_SEMA_METHOD,
	META_METHOD_SEMA_ASSOCIATION,
	META_METHOD_SEMA_SIZE
};

enum {
	META_MODULE_GENERATION,
	META_MODULE_NAME,
	META_MODULE_MVID,
	META_MODULE_ENC,
	META_MODULE_ENCBASE,
	META_MODULE_SIZE
};

enum {
	META_MODULEREF_NAME,
	META_MODULEREF_SIZE
};

enum {
	META_NESTED_CLASS_NESTED,
	META_NESTED_CLASS_ENCLOSING,
	META_NESTED_CLASS_SIZE
};

enum {
	META_PARAM_FLAGS,
	META_PARAM_SEQUENCE,
	META_PARAM_NAME,
	META_PARAM_SIZE
};

enum {
	META_PROPERTY_FLAGS,
	META_PROPERTY_NAME,
	META_PROPERTY_TYPE,
	META_PROPERTY_SIZE
};

enum {
	META_PROPERTY_MAP_PARENT,
	META_PROPERTY_MAP_PROPERTY_LIST,
	META_PROPERTY_MAP_SIZE
};

enum {
	META_STAND_ALONG_SIGNATURE,
	META_STAND_ALONG_SIGNATURE_SIZE
};

enum {
	META_TYPEDEF_FLAGS,
	META_TYPEDEF_NAME,
	META_TYPEDEF_NAMESPACE,
	META_TYPEDEF_EXTENDS,
	META_TYPEDEF_FIELD_LIST,
	META_TYPEDEF_METHOD_LIST,
	META_TYPEDEF_SIZE
};

enum {
	META_TYPEREF_SCOPE,
	META_TYPEREF_NAME,
	META_TYPEREF_NAMESPACE,
	META_TYPEREF_SIZE
};

enum {
	META_TYPESPEC_SIGNATURE,
	META_TYPESPEC_SIZE
};

/*
 * Coded Tokens
 * The _BITS entry is for the bits used in the token.
 * The _MASK entry is for mask the index out.
 */

enum {
	TYPEDEFORREF_TYPEDEF,
	TYPEDEFORREF_PARAMDEF,
	TYPEDEFORREF_TYPESPEC,
	TYPEDEFORREF_BITS = 2,
	TYPEDEFORREF_MASK = 3
};

enum {
	HASCOSTANT_FIEDDEF,
	HASCOSTANT_FIEDREF, /* typo in spec? LAMESPEC */
	HASCOSTANT_PROPERTY,
	HASCOSTANT_BITS = 2,
	HASCOSTANT_MASK = 3
};

enum {
	CUSTOM_ATTR_METHODDEF,
	CUSTOM_ATTR_FIELDDEF,
	CUSTOM_ATTR_TYPEREF,
	CUSTOM_ATTR_TYPEDEF,
	CUSTOM_ATTR_PARAMDEF,
	CUSTOM_ATTR_INTERFACE,
	CUSTOM_ATTR_MEMBERREF,
	CUSTOM_ATTR_MODULE,
	CUSTOM_ATTR_PERMISSION,
	CUSTOM_ATTR_PROPERTY,
	CUSTOM_ATTR_EVENT,
	CUSTOM_ATTR_SIGNATURE,
	CUSTOM_ATTR_MODULEREF,
	CUSTOM_ATTR_TYPESPEC,
	CUSTOM_ATTR_ASSEMBLY,
	CUSTOM_ATTR_ASSEMBLYREF,
	CUSTOM_ATTR_FILE,
	CUSTOM_ATTR_EXP_TYPE,
	CUSTOM_ATTR_MANIFEST,
	CUSTOM_ATTR_BITS = 5,
	CUSTOM_ATTR_MASK = 0x1F
};

enum {
	HAS_FIELD_MARSHAL_FIELDSREF,
	HAS_FIELD_MARSHAL_PARAMDEF,
	HAS_FIELD_MARSHAL_BITS = 1,
	HAS_FIELD_MARSHAL_MASK = 1
};

enum {
	HAS_DECL_SECURITY_TYPEDEF,
	HAS_DECL_SECURITY_METHODDEF,
	HAS_DECL_SECURITY_ASSEMBLY,
	HAS_DECL_SECURITY_BITS = 1,
	HAS_DECL_SECURITY_MASK = 1
};

enum {
	MEMBERREF_PARENT_TYPEDEF,
	MEMBERREF_PARENT_TYPEREF,
	MEMBERREF_PARENT_MODULEREF,
	MEMBERREF_PARENT_METHODDEF,
	MEMBERREF_PARENT_TYPESPEC,
	MEMBERREF_PARENT_BITS = 3,
	MEMBERREF_PARENT_MASK = 7
};

enum {
	HAS_SEMANTICS_EVENT,
	HAS_SEMANTICS_PROPERTY,
	HAS_SEMANTICS_BITS = 1,
	HAS_SEMANTICS_MASK = 1
};

enum {
	METHODDEFORREF_METHODDEF,
	METHODDEFORREF_METHODREF,
	METHODDEFORREF_BITS = 1,
	METHODDEFORREF_MASK = 1
};

enum {
	MEMBERFORWD_FIELDDEF,
	MEMBERFORWD_METHODDEF,
	MEMBERFORWD_BITS = 1,
	MEMBERFORWD_MASK = 1
};

enum {
	IMPLEMENTATION_FILE,
	IMPLEMENTATION_ASSEMBLYREF,
	IMPLEMENTATION_EXP_TYPE,
	IMPLEMENTATION_BITS = 2,
	IMPLEMENTATION_MASK = 3
};

enum {
	CUSTOM_ATTR_TYPE_TYPEREF,
	CUSTOM_ATTR_TYPE_TYPEDEF,
	CUSTOM_ATTR_TYPE_METHODDEF,
	CUSTOM_ATTR_TYPE_MEMBERREF,
	CUSTOM_ATTR_TYPE_STRING,
	CUSTOM_ATTR_TYPE_BITS = 3,
	CUSTOM_ATTR_TYPE_MASK = 7
};

enum {
	RESOLTION_SCOPE_MODULE,
	RESOLTION_SCOPE_MODULEREF,
	RESOLTION_SCOPE_ASSEMBLYREF, /* LAMESPEC claims 3 */
	RESOLTION_SCOPE_TYPEREF,     /* LAMESPEC claims 4 */
	RESOLTION_SCOPE_BITS = 2,    /* LAMESPEC claims 3 */
	RESOLTION_SCOPE_MASK = 3     /* LAMESPEC claims 7 */
};

#endif /* __MONO_METADATA_ROW_INDEXES_H__ */

