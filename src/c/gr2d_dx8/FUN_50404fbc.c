/* FUN_50404fbc - 0x50404fbc in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 * __thiscall FUN_50404fbc(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_5042d37c;
  FUN_504068bd((int)this);
  if ((param_1 & 1) != 0) {
    FUN_5040170b(&DAT_50438f50,this);
  }
  return this;
}


