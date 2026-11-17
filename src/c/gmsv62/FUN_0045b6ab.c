/* FUN_0045b6ab - 0x0045b6ab in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0045b6ab(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int local_2c;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x40) == 0) {
    local_2c = 0x99;
    iStack_30 = 0x45b6cd;
    FUN_00464f0d();
  }
  else if (*(int *)(extraout_ECX + 0x18) == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    local_2c = unaff_EBP + -0x14;
    iStack_30 = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_34 = 0x45b6f8;
    iVar1 = FUN_0045b803();
    if (iVar1 == 1) {
      local_2c = 0;
      iStack_30 = 0;
      uStack_34 = 0x45b70d;
      FUN_0045ed72();
      iStack_30 = 0x45b714;
      FUN_0045ee27();
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(unaff_EBP + -0x10) + -4);
      }
      local_2c = 0;
      iStack_30 = 0;
      if (iVar1 == 0) {
        uStack_34 = 0;
        uStack_38 = 0;
        *(undefined1 **)(unaff_EBP + -0x1c) = auStack_3c;
        FUN_0045f0f3(s_Please_enter_the_coupon_code__0096458c,0xffffffff);
        FUN_007db3ad();
      }
      else {
        uStack_34 = 199;
        uStack_38 = 0x45b756;
        FUN_0060142b();
        iStack_30 = unaff_EBP + -0x14;
        *(int **)(unaff_EBP + -0x1c) = &local_2c;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        local_2c = 0;
        uStack_34 = 0x45b76b;
        FUN_00414f8b();
        iStack_30 = 0x45b773;
        FUN_00459cb5();
        iStack_30 = unaff_EBP + -0x10;
        *(int **)(unaff_EBP + -0x1c) = &local_2c;
        local_2c = 0;
        uStack_34 = 0x45b784;
        FUN_00414f8b();
        iStack_30 = 0x45b78c;
        FUN_00459cb5();
        if ((*(char **)(unaff_EBP + -0x14) != (char *)0x0) &&
           (**(char **)(unaff_EBP + -0x14) != '\0')) {
          iStack_30 = unaff_EBP + -0x18;
          *(int **)(unaff_EBP + -0x1c) = &local_2c;
          local_2c = 0;
          uStack_34 = 0x45b7a8;
          FUN_00414f8b();
          iStack_30 = 0x45b7b0;
          FUN_00459cb5();
        }
        local_2c = unaff_EBP + -0x2c;
        iStack_30 = 0x45b7bf;
        FUN_004751b2();
        *(undefined4 *)(extraout_ECX + 0x18) = 1;
        *(undefined1 *)(unaff_EBP + -4) = 2;
        local_2c = 0x45b7d2;
        FUN_0045ebca();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    local_2c = 0x45b7de;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    local_2c = 0x45b7e9;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    local_2c = 0x45b7f5;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


