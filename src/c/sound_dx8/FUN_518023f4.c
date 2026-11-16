/* FUN_518023f4 - 0x518023f4 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_518023f4(void)

{
  if ((DAT_5181ff0c & 1) == 0) {
    DAT_5181ff0c = DAT_5181ff0c | 1;
    type_info::raw_name((type_info *)&CWzStream::RTTI_Type_Descriptor);
    FUN_51802b0f(&DAT_5181ff10);
  }
  return;
}


