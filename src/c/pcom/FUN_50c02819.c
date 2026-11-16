/* FUN_50c02819 - 0x50c02819 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c02819(void)

{
  if ((DAT_50c214ec & 1) == 0) {
    DAT_50c214ec = DAT_50c214ec | 1;
    type_info::raw_name((type_info *)&CWzStream::RTTI_Type_Descriptor);
    FUN_50c02951(&DAT_50c214f0);
  }
  return;
}


