/* FUN_00650c07 - 0x00650c07 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00650c07(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  code *extraout_ECX;
  int unaff_EBP;
  int iVar4;
  code *pcStack_40;
  int *piStack_3c;
  int *local_38;
  
  FUN_00879bb8();
  iVar4 = 1;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    local_38 = (int *)&DAT_008f9b80;
    piStack_3c = (int *)(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + 0xc) = 0x80004005;
                    /* WARNING: Subroutine does not return */
    pcStack_40 = (code *)0x650c39;
    __CxxThrowException_8();
  }
  local_38 = (int *)0x650c3e;
  iVar2 = FUN_0040cf4d();
  *(int *)(unaff_EBP + -0x20) = iVar2;
  if (iVar2 < 1) {
    local_38 = (int *)&DAT_008f9b80;
    piStack_3c = (int *)(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + 0xc) = 0x80004005;
                    /* WARNING: Subroutine does not return */
    pcStack_40 = (code *)0x650c5c;
    __CxxThrowException_8();
  }
  local_38 = (int *)(unaff_EBP + -0xd);
  pcStack_40 = (code *)0x650c69;
  piStack_3c = (int *)iVar2;
  FUN_006547eb();
  piVar1 = *(int **)(unaff_EBP + 0x14);
  if (0 < iVar2) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0x1cc;
    do {
      local_38 = (int *)0x650c83;
      FUN_0087a1b0();
      local_38 = (int *)0x0;
      piStack_3c = (int *)0x0;
      pcStack_40 = (code *)&stack0xffffffcc;
      uVar3 = FUN_00412335(iVar4);
      *(code ***)(unaff_EBP + -0x24) = &pcStack_40;
      FUN_004033a1(uVar3);
      iVar2 = unaff_EBP + -0x34;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_0040263d(iVar2);
      FUN_004048a4(iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      pcStack_40 = (code *)0x650cbe;
      iVar2 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x1c) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      if (iVar2 != 0) {
        local_38 = (int *)(unaff_EBP + -0x1c);
        piStack_3c = (int *)0x650cd4;
        local_38 = (int *)FUN_00404b30();
        if (((int)local_38 < 0) && (local_38 != (int *)0x80004002)) {
          piStack_3c = (int *)0x650ce5;
          FUN_00878dfb();
        }
      }
      local_38 = (int *)(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      piStack_3c = (int *)0x650cf2;
      local_38 = (int *)FUN_00402bc3();
      if ((int)local_38 < 0) {
        piStack_3c = (int *)0x650cfd;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        local_38 = (int *)&DAT_008f9b80;
        piStack_3c = (int *)(unaff_EBP + 0xc);
        *(undefined4 *)(unaff_EBP + 0xc) = 0x80004005;
                    /* WARNING: Subroutine does not return */
        pcStack_40 = FUN_00650dae;
        __CxxThrowException_8();
      }
      pcStack_40 = *(code **)(unaff_EBP + -0x18);
      *(int ***)(unaff_EBP + -0x24) = &local_38;
      local_38 = piVar1;
      if (piVar1 != (int *)0x0) {
        pcStack_40 = (code *)0x650d27;
        piStack_3c = piVar1;
        (**(code **)(*piVar1 + 4))();
        pcStack_40 = extraout_ECX;
      }
      *(code ***)(unaff_EBP + -0x24) = &pcStack_40;
      piStack_3c = (int *)iVar4;
      FUN_00424dbc(unaff_EBP + -0x14);
      FUN_0064f6a6(*(undefined4 *)(unaff_EBP + 8));
      local_38 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (local_38 != (int *)0x0) {
        piStack_3c = (int *)0x650d52;
        (**(code **)(*local_38 + 8))();
      }
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x1cc;
      iVar4 = iVar4 + 1;
    } while (iVar4 <= *(int *)(unaff_EBP + -0x20));
  }
  local_38 = *(int **)(unaff_EBP + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (local_38 != (int *)0x0) {
    piStack_3c = (int *)0x650d74;
    (**(code **)(*local_38 + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    piStack_3c = (int *)0x650d82;
    local_38 = piVar1;
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 1;
}


