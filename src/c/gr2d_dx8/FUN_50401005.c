/* FUN_50401005 - 0x50401005 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_50401005(int param_1,int param_2)

{
  if (param_2 == 1) {
    _DAT_50438a68 = &DAT_504340d8;
    _DAT_50438a20 = &DAT_50438a28;
    _DAT_50438a28 = 0x54;
    _DAT_50438a5c = 0x300;
    FUN_50401a0e((int *)&DAT_50438a28,0x50434080,param_1);
    (*DAT_50438bfc)(param_1);
  }
  else if (param_2 == 0) {
    FUN_50401b77((int *)&DAT_50438a28);
  }
  return 1;
}


