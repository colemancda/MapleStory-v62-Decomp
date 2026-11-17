/* FUN_008044a8 - 0x008044a8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_008044a8(int param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  
  uVar1 = FUN_007f17d4();
  fVar2 = (float10)FUN_004f1993(param_1 + 200,*(undefined4 *)(param_1 + 0xd8));
  if (fVar2 < (float10)*(double *)(*(int *)(DAT_00978138 + 8) + 0x68)) {
    *(undefined4 *)(param_1 + 0x238) = 0;
  }
  else {
    *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + 1;
  }
  return uVar1;
}


