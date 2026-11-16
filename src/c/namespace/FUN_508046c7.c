/* FUN_508046c7 - 0x508046c7 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_508046c7(void)

{
  if ((DAT_5081eba0 & 1) == 0) {
    DAT_5081eba0 = DAT_5081eba0 | 1;
    type_info::raw_name((type_info *)&CWzStream::RTTI_Type_Descriptor);
    FUN_50804f68(&DAT_5081eba4);
  }
  return;
}


