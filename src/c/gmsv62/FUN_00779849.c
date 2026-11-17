/* FUN_00779849 - 0x00779849 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00779849(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar3;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int local_2c;
  
  FUN_00879bb8();
  iVar1 = *(int *)(DAT_00978368 + 0x2cd2);
  *(int *)(unaff_EBP + -0x14) = DAT_00978368;
  if (iVar1 != 0) {
    local_2c = 0x779879;
    iVar1 = FUN_008582fe();
    if (iVar1 != 0) {
      local_2c = 0;
      iStack_30 = 0;
      uStack_34 = 0;
      uStack_38 = 0;
      *(undefined1 **)(unaff_EBP + -0x18) = auStack_3c;
      FUN_00679d22(auStack_3c,0xc9c);
      iVar1 = FUN_007db791();
      if (iVar1 == 6) {
        iVar1 = 0;
        piVar3 = (int *)(extraout_ECX + 0x90);
        *(int **)(unaff_EBP + -0x18) = piVar3;
        do {
          iVar1 = iVar1 + 1;
          iStack_30 = unaff_EBP + -0x10;
          uStack_34 = 0x7798c9;
          local_2c = iVar1;
          FUN_008581b4();
          local_2c = *piVar3;
          if (*piVar3 == 0) {
            local_2c = DAT_00980dfc;
          }
          iStack_30 = DAT_00980dfc;
          if (*(int *)(unaff_EBP + -0x10) != 0) {
            iStack_30 = *(int *)(unaff_EBP + -0x10);
          }
          uStack_34 = 0x7798e6;
          iVar2 = FUN_008858f0();
          if (iVar2 != 0) {
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            local_2c = 0x779932;
            FUN_00414ebb();
            local_2c = 0;
            iStack_30 = 0;
            uStack_34 = 0x83;
            uStack_38 = 0x779941;
            FUN_0060142b();
            local_2c = 8;
            *(undefined4 *)(unaff_EBP + -4) = 1;
            iStack_30 = 0x779952;
            FUN_00457cda();
            iVar1 = *(int *)(unaff_EBP + -0x18);
            iVar2 = 5;
            do {
              *(int **)(unaff_EBP + -0x18) = &local_2c;
              local_2c = 0;
              uStack_34 = 0x779966;
              iStack_30 = iVar1;
              FUN_00414f8b();
              iStack_30 = 0x77996e;
              FUN_00459cb5();
              iVar1 = iVar1 + 4;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
            local_2c = unaff_EBP + -0x28;
            iStack_30 = 0x779983;
            FUN_004751b2();
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            local_2c = 0x77998f;
            FUN_0045ebca();
            goto LAB_0077998f;
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          local_2c = 0x7798f8;
          FUN_00414ebb();
          piVar3 = piVar3 + 1;
        } while (iVar1 < 5);
        local_2c = 0;
        iStack_30 = 0;
        uStack_34 = 0;
        uStack_38 = 0;
        *(undefined1 **)(unaff_EBP + -0x18) = auStack_3c;
        FUN_00679d22(auStack_3c,0xc96);
        FUN_007db3ad();
      }
    }
  }
LAB_0077998f:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


