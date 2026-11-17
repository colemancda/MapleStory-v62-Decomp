/* FUN_0077e45e - 0x0077e45e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0077e45e(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x588);
  if (iVar1 == 0) {
    FUN_00769d4e();
  }
  else if (iVar1 == 1) {
    FUN_0076cd06();
  }
  else if (iVar1 == 2) {
    FUN_007702e2();
    if ((DAT_0097bef0 != 0) && (*(int *)(DAT_00978368 + 0x2cac) != 0)) {
      FUN_008161f1(0);
    }
  }
  else if (iVar1 == 3) {
    FUN_00773b1e();
    if ((DAT_0097bef8 != 0) && (*(int *)(DAT_00978368 + 0x2cd2) != 0)) {
      FUN_00778f1a();
    }
  }
  else if (iVar1 == 4) {
    FUN_00779c8e();
  }
  FUN_0077e699();
  FUN_0077e521();
  FUN_0077efbd(0xffffffff);
  FUN_0077f2b3(0xffffffff);
  FUN_008161f1(0);
  return;
}


