/* FUN_004ea88e - 0x004ea88e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004ea88e(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  int *piStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  
  FUN_00879bb8();
  iVar1 = DAT_00978368;
  if (*(int *)(DAT_00978368 + 0x2cac) == 0) {
    local_20 = 0x16e;
    iStack_24 = unaff_EBP + -0x10;
    uStack_28 = 0x4ea8c2;
    iStack_24 = FUN_00679d22();
    local_20 = 0xc;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uStack_28 = 0x4ea8cd;
    FUN_00471102();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    piStack_30 = *(int **)(DAT_00978368 + 0x2cb8);
    if (*piStack_30 != *(int *)(DAT_00978368 + 0x2088)) {
      local_20 = 0;
      iStack_24 = 0;
      uStack_28 = 0;
      uStack_2c = 0;
      *(int ***)(unaff_EBP + -0x10) = &piStack_30;
      FUN_00679d22(&piStack_30,0x167);
      iVar2 = FUN_007db791();
      if (iVar2 == 6) {
        local_20 = 0;
        iStack_24 = 0;
        uStack_28 = 0x72;
        uStack_2c = 0x4ea950;
        FUN_0060142b();
        local_20 = 7;
        *(undefined4 *)(unaff_EBP + -4) = 2;
        iStack_24 = 0x4ea961;
        FUN_00457cda();
        local_20 = *(int *)(iVar1 + 0x2088);
        iStack_24 = 0x4ea96f;
        FUN_00457d37();
        local_20 = 0x4ea976;
        uStack_28 = FUN_00485c13();
        *(int **)(unaff_EBP + -0x10) = &local_20;
        iStack_24 = 0xffffffff;
        local_20 = 0;
        uStack_2c = 0x4ea986;
        FUN_00414edd();
        iStack_24 = 0x4ea98e;
        FUN_00459cb5();
        local_20 = unaff_EBP + -0x20;
        iStack_24 = 0x4ea99d;
        FUN_004751b2();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        local_20 = 0x4ea9a9;
        FUN_0045ebca();
      }
      goto LAB_004ea9a9;
    }
    local_20 = 0x16f;
    iStack_24 = unaff_EBP + -0x10;
    uStack_28 = 0x4ea8fb;
    iStack_24 = FUN_00679d22();
    local_20 = 0xc;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    uStack_28 = 0x4ea90a;
    FUN_00471102();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  local_20 = 0x4ea918;
  FUN_00414ebb();
LAB_004ea9a9:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


