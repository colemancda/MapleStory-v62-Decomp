/* FUN_50002614 - 0x50002614 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_50002614(void)

{
  if ((DAT_500864fc & 1) == 0) {
    DAT_500864fc = DAT_500864fc | 1;
    type_info::raw_name((type_info *)&CWzStream::RTTI_Type_Descriptor);
    FUN_5000276c(&DAT_50086500);
  }
  return;
}


