/* FUN_004c216d - 0x004c216d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004c216d(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar1 = FUN_0054e7b3(*(undefined4 *)(unaff_EBP + 0x30));
  if (iVar1 == 0) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004c267b();
  }
  else {
    iVar2 = *(int *)(unaff_EBP + 0x10) / 100;
    iVar3 = FUN_0044d79d(*(undefined4 *)(unaff_EBP + 0x30),0xe,*(undefined4 *)(unaff_EBP + 8));
    if (iVar3 == 0) {
LAB_004c21f7:
      uVar4 = -(uint)(iVar2 != 0) & 1 << ((char)iVar2 - 1U & 0x1f);
      iVar3 = (*(int *)(unaff_EBP + 0x30) / 1000) % 10;
      if (iVar2 == 9) {
LAB_004c2320:
        uVar6 = 1;
      }
      else {
        if (((((iVar3 == 2) || (*(int *)(unaff_EBP + 8) == 2)) || (iVar3 == *(int *)(unaff_EBP + 8))
             ) && ((iVar2 = FUN_00413367(iVar1 + 0x60,*(undefined4 *)(iVar1 + 0x68)),
                   iVar2 <= *(int *)(unaff_EBP + 0xc) &&
                   (iVar2 = FUN_00413367(iVar1 + 0x18,*(undefined4 *)(iVar1 + 0x20)),
                   iVar2 <= *(int *)(unaff_EBP + 0x14))))) &&
           ((iVar2 = FUN_00413367(iVar1 + 0x30,*(undefined4 *)(iVar1 + 0x38)),
            iVar2 <= *(int *)(unaff_EBP + 0x18) &&
            ((iVar2 = FUN_00413367(iVar1 + 0x24,*(undefined4 *)(iVar1 + 0x2c)),
             iVar2 <= *(int *)(unaff_EBP + 0x1c) &&
             (iVar2 = FUN_00413367(iVar1 + 0x3c,*(undefined4 *)(iVar1 + 0x44)),
             iVar2 <= *(int *)(unaff_EBP + 0x20))))))) {
          iVar2 = FUN_00413367(iVar1 + 0x48,*(undefined4 *)(iVar1 + 0x50));
          if ((iVar2 == 0) ||
             (iVar2 = FUN_00413367(iVar1 + 0x48,*(undefined4 *)(iVar1 + 0x50)),
             iVar2 <= *(int *)(unaff_EBP + 0x24))) {
            iVar2 = iVar1 + 0x54;
            iVar3 = FUN_00413367(iVar2,*(undefined4 *)(iVar1 + 0x5c));
            if (((iVar3 == 0) ||
                ((iVar3 = FUN_00413367(iVar2,*(undefined4 *)(iVar1 + 0x5c)), iVar3 == -1 &&
                 (uVar4 == 0)))) ||
               ((iVar3 = FUN_00413367(iVar2,*(undefined4 *)(iVar1 + 0x5c)), 0 < iVar3 &&
                (uVar5 = FUN_00413367(iVar2,*(undefined4 *)(iVar1 + 0x5c)), (uVar4 & uVar5) != 0))))
            goto LAB_004c2320;
          }
        }
        uVar6 = 0;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + 0x2c) != 0) {
        FUN_004c26f7(0);
      }
      goto LAB_004c2339;
    }
    if (*(int *)(unaff_EBP + 0x2c) != 0) {
      uVar6 = FUN_0045e2eb();
      iVar3 = FUN_00459dd4(uVar6);
      if (iVar3 != 0) {
        uVar4 = FUN_0045f03e(*(int *)(unaff_EBP + 0x2c) + 0x35,
                             *(undefined4 *)(*(int *)(unaff_EBP + 0x2c) + 0x37));
        *(uint *)(unaff_EBP + 0xc) = uVar4 & 0xff;
        goto LAB_004c21f7;
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + 0x2c) != 0) {
      FUN_004c26f7(0);
    }
  }
  uVar6 = 0;
LAB_004c2339:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar6;
}


