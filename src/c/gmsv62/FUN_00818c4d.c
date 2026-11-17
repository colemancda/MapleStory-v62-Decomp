/* FUN_00818c4d - 0x00818c4d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00818c4d(void)

{
  int *piVar1;
  int iVar2;
  int iStack_20;
  int *piStack_1c;
  undefined *puStack_18;
  int *piStack_14;
  uint uStack_10;
  
  if (DAT_0097c1ac == (int *)0x0) {
    uStack_10 = 0x80004003;
    piStack_14 = (int *)0x818c65;
    FUN_00878dfb();
  }
  uStack_10 = 0x818c70;
  iVar2 = FUN_00527f9a();
  if (DAT_00973cd4 != 0) {
    if (iVar2 == 0) {
      uStack_10 = 0;
    }
    else {
      if (*(int *)(DAT_00973cd4 + 0x1c) == 0) {
        uStack_10 = 0;
        piStack_14 = (int *)0x1;
        puStack_18 = (undefined *)0x0;
        piStack_1c = (int *)0x0;
        iStack_20 = DAT_00973cd4;
        FUN_00679d22(&iStack_20,0x11d5);
        FUN_007db3ad();
        return;
      }
      uStack_10 = 5;
    }
    piStack_14 = *(int **)(DAT_00973cd4 + 0x10);
    puStack_18 = (undefined *)0x818cbd;
    (*DAT_0097b534)();
  }
  if (DAT_0097c1ac == (int *)0x0) {
    uStack_10 = 0x80004003;
    piStack_14 = (int *)0x818ccb;
    FUN_00878dfb();
    if (DAT_0097c1ac == (int *)0x0) {
      uStack_10 = 0x80004003;
      piStack_14 = (int *)0x818cd9;
      FUN_00878dfb();
    }
  }
  piVar1 = DAT_0097c1ac;
  uStack_10 = 0x818ce6;
  iVar2 = FUN_00527f9a();
  uStack_10 = (uint)(iVar2 == 0);
  piStack_14 = piVar1;
  puStack_18 = (undefined *)0x818cf2;
  iStack_20 = (**(code **)(*piVar1 + 0x44))();
  if (iStack_20 < 0) {
    puStack_18 = &DAT_00964018;
    piStack_1c = piVar1;
    FUN_00878e09();
  }
  return;
}


