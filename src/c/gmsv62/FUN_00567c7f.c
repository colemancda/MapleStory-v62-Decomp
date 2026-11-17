/* FUN_00567c7f - 0x00567c7f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00567c7f(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  cVar3 = FUN_0042452b();
  *(int *)(unaff_EBP + 8) = (int)cVar3;
  if (cVar3 < 0) {
    if (DAT_0097942c == 0) {
      iVar4 = FUN_004029b9(0x150);
      *(int *)(unaff_EBP + 8) = iVar4;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar4 != 0) {
        FUN_0058db4a(extraout_ECX);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
    else {
      FUN_0058e1fb();
    }
    FUN_00564909(1);
  }
  else {
    puVar5 = (undefined4 *)FUN_0056ab5e(0xffffffff);
    *puVar5 = *(undefined4 *)(unaff_EBP + 8);
    uVar6 = FUN_0045cdbc(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_00414f8b(uVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + 8) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + 8) + -0xc);
    }
    uVar7 = FUN_0042452b();
    puVar5[2] = uVar7 & 0xff;
    uVar6 = FUN_0045cdbc(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 2;
    FUN_00414f8b(uVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + 8) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + 8) + -0xc);
    }
    uVar7 = FUN_00424561();
    puVar5[4] = uVar7 & 0xffff;
    uVar7 = FUN_00424561();
    puVar5[5] = uVar7 & 0xffff;
    uVar7 = FUN_0042452b();
    puVar5[6] = uVar7 & 0xff;
    uVar7 = FUN_0042452b();
    if ((uVar7 & 0xff) != 0) {
      *(undefined4 **)(unaff_EBP + -0x10) = puVar5 + 7;
      *(uint *)(unaff_EBP + 8) = uVar7 & 0xff;
      do {
        iVar4 = FUN_0056a9a7(0xffffffff);
        uVar6 = FUN_0045cdbc(unaff_EBP + -0x14);
        *(undefined4 *)(unaff_EBP + -4) = 3;
        FUN_00414f8b(uVar6);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x14) != 0) {
          FUN_00434e38(*(int *)(unaff_EBP + -0x14) + -0xc);
        }
        uVar6 = FUN_0042459a();
        *(undefined4 *)(iVar4 + 4) = uVar6;
        uVar7 = FUN_0042452b();
        *(uint *)(iVar4 + 8) = uVar7 & 0xff;
        uVar7 = FUN_0042452b();
        *(uint *)(iVar4 + 0xc) = uVar7 & 0xff;
        uVar7 = FUN_0042452b();
        piVar1 = (int *)(unaff_EBP + 8);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        *(uint *)(iVar4 + 0x10) = uVar7 & 0xff;
      } while (iVar2 != 0);
    }
    uVar7 = FUN_00424561();
    *(uint *)(extraout_ECX + 0x1b8) = uVar7 & 0xffff;
    FUN_0056ac65();
    if ((*(int *)(extraout_ECX + 0x1b8) != 0) && (iVar4 = 0, 0 < *(int *)(extraout_ECX + 0x1b8))) {
      do {
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        *(undefined4 *)(unaff_EBP + -4) = 4;
        uVar7 = FUN_00424561();
        *(uint *)(unaff_EBP + -0x20) = uVar7 & 0xffff;
        uVar7 = FUN_00424561();
        *(uint *)(unaff_EBP + -0x1c) = uVar7 & 0xffff;
        uVar6 = FUN_0045cdbc(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_00414f8b(uVar6);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_00414ebb();
        FUN_0056a71f(unaff_EBP + -0x20,0xffffffff);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00414ebb();
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(extraout_ECX + 0x1b8));
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


