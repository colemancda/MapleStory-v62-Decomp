/* FUN_006f989b - 0x006f989b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_006f989b(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar4;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar1 = *(int *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 < 0xc9) {
    iVar3 = *(int *)(unaff_EBP + 0xc);
    if (0x1e < iVar1 - iVar3) {
      iStack_18 = 1;
      *(undefined4 **)(unaff_EBP + 0x1c) = &uStack_24;
      uVar4 = 0x2e3;
      goto LAB_006f99ff;
    }
    if (iVar3 <= iVar1) {
      if ((*(int *)(unaff_EBP + 0x1c) < iVar3) || (iVar1 < *(int *)(unaff_EBP + 0x1c))) {
        iStack_18 = 1;
        *(undefined4 **)(unaff_EBP + 0x1c) = &uStack_24;
        uVar4 = 0x2e5;
      }
      else {
        uVar4 = 1;
        if (*(int *)(extraout_ECX + 0x668) != 1) goto LAB_006f9a12;
        iVar1 = *(int *)(unaff_EBP + 0x14);
        if ((iVar1 < 2) || (6 < iVar1)) {
          iStack_18 = 0;
          *(undefined4 **)(unaff_EBP + 0x1c) = &uStack_24;
          uVar4 = 0x2e1;
        }
        else {
          iStack_14 = 0x6f996f;
          iVar3 = FUN_0085c65a();
          if (iVar1 <= iVar3) {
            iStack_14 = 0x2e2;
            iStack_18 = unaff_EBP + 0x1c;
            iStack_1c = 0x6f9986;
            puVar2 = (undefined4 *)FUN_00679d22();
            iStack_18 = *puVar2;
            iStack_1c = unaff_EBP + -0x10;
            *(undefined1 *)(unaff_EBP + -4) = 2;
            iStack_20 = 0x6f9997;
            iStack_14 = iVar1;
            FUN_00434e21();
            *(undefined1 *)(unaff_EBP + -4) = 0;
            iStack_14 = 0x6f99a5;
            FUN_00414ebb();
            *(undefined4 **)(unaff_EBP + 0x18) = &uStack_24;
            goto LAB_006f99af;
          }
          if (*(int *)(unaff_EBP + 0x18) != 0) {
            if ((*(ushort *)(unaff_EBP + 0x1a) & 0xfff8) != 0) {
              uVar4 = 0;
            }
            goto LAB_006f9a12;
          }
          iStack_18 = 1;
          *(undefined4 **)(unaff_EBP + 0x1c) = &uStack_24;
          uVar4 = 0x2e7;
        }
      }
      goto LAB_006f99ff;
    }
    iStack_14 = 0x2e6;
    iStack_18 = unaff_EBP + 0x1c;
    iStack_1c = 0x6f9909;
    puVar2 = (undefined4 *)FUN_00679d22();
    iStack_1c = *puVar2;
    iStack_20 = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_24 = 0x6f991b;
    iStack_18 = iVar3;
    iStack_14 = iVar1;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_14 = 0x6f9929;
    FUN_00414ebb();
    *(undefined4 **)(unaff_EBP + 0x1c) = &uStack_24;
LAB_006f99af:
    iStack_14 = 0;
    iStack_18 = 1;
    iStack_1c = 0;
    iStack_20 = 0;
    FUN_00450368(unaff_EBP + -0x10);
  }
  else {
    iStack_18 = 1;
    *(undefined4 **)(unaff_EBP + 0x1c) = &uStack_24;
    uVar4 = 0x2e4;
LAB_006f99ff:
    iStack_14 = 0;
    iStack_1c = 0;
    iStack_20 = 0;
    FUN_00679d22(&uStack_24,uVar4);
  }
  FUN_007db3ad();
  uVar4 = 0;
LAB_006f9a12:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_14 = 0x6f9a1e;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


