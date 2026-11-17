/* FUN_00760f0f - 0x00760f0f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00760f0f(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  int iVar4;
  int *piVar5;
  
  FUN_00879bb8();
  iVar1 = DAT_0097951c;
  iVar2 = *(int *)(DAT_0097951c + 0x6b0);
  iVar4 = 0;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + -4);
  }
  FUN_004ad003(iVar2 + -2);
  iVar2 = *(int *)(iVar1 + 0x6b0);
  if (iVar2 == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(iVar2 + -4);
  }
  if (*(int *)(iVar1 + 0x61c) != *(int *)(DAT_00978358 + 0xd78)) {
    piVar5 = (int *)(extraout_ECX + 0x78);
    do {
      (**(code **)(*(int *)(*piVar5 + 4) + 0x24))(0);
      if (*(int *)(*(int *)(*(int *)(unaff_EBP + -0x14) + 0x70) + 0x38) + iVar4 <
          *(int *)(unaff_EBP + -0x10)) {
        uVar3 = FUN_0045e2eb();
        FUN_0084a5e4(unaff_EBP + -0x1c,uVar3);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          iVar2 = FUN_0045e2eb();
          if (((iVar2 / 10000 != 0x38f) && (iVar2 / 10000 != 0x21f)) &&
             (iVar2 = FUN_0045e2eb(), iVar2 != 0x5269a8)) {
            (**(code **)(*(int *)(*piVar5 + 4) + 0x24))(1);
          }
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          FUN_0045e794(0);
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
        }
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 2;
    } while (iVar4 < 3);
  }
  FUN_008161f1(0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


