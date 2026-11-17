/* FUN_007d27a3 - 0x007d27a3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_007d27a3(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  uVar4 = **(undefined4 **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x18) = 0x104;
  iVar1 = (*DAT_0097b6c0)(0x80000000,uVar4,unaff_EBP + -0x124,unaff_EBP + -0x18);
  if (iVar1 == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + 0xc,0x86b);
    uVar4 = *puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00434e21(unaff_EBP + -0x14,uVar4,unaff_EBP + -0x124);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -0x18) = 0x104;
    iVar1 = (*DAT_0097b6c0)(0x80000000,*(undefined4 *)(unaff_EBP + -0x14),unaff_EBP + -0x124,
                            unaff_EBP + -0x18);
    if (iVar1 == 0) {
      FUN_00414edd(unaff_EBP + -0x124,0xffffffff);
      puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x20,0x86c);
      uVar4 = *puVar2;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iVar1 = FUN_004538dc(uVar4,0,0);
      *(bool *)(unaff_EBP + 0xf) = iVar1 == -1;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00414ebb();
      if (*(char *)(unaff_EBP + 0xf) != '\0') {
        piVar3 = (int *)FUN_00679d22(unaff_EBP + 0xc,0x86d);
        iVar1 = *piVar3;
        *(undefined1 *)(unaff_EBP + -4) = 5;
        if (iVar1 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(iVar1 + -4);
        }
        FUN_0045efbb(iVar1,uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        FUN_00414ebb();
      }
    }
    puVar2 = *(undefined4 **)(unaff_EBP + 8);
    *puVar2 = 0;
    FUN_00414f8b(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -0x1c) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
  }
  else {
    puVar2 = *(undefined4 **)(unaff_EBP + 8);
    *puVar2 = 0;
    FUN_00414f8b(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -0x1c) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


