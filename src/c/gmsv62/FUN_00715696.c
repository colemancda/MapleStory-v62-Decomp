/* FUN_00715696 - 0x00715696 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00715696(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_58 [4];
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x1c) = DAT_00979174;
  uVar2 = -(uint)(*(int *)(extraout_ECX + 0x80) != 0) & 5;
  *(int *)(unaff_EBP + -0x30) = extraout_ECX;
  *(uint *)(unaff_EBP + -0x10) = uVar2;
  *(uint *)(unaff_EBP + -0x24) = uVar2 + 5;
  *(uint *)(unaff_EBP + -0x14) = uVar2 * 0x28;
  iVar5 = extraout_ECX;
  while( true ) {
    iVar3 = *(int *)(*(int *)(unaff_EBP + -0x1c) + 100);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + -4);
    }
    if (*(int *)(unaff_EBP + -0x24) <= iVar3) {
      iVar3 = *(int *)(unaff_EBP + -0x24);
    }
    if (iVar3 <= *(int *)(unaff_EBP + -0x10)) break;
    uStack_48 = *(undefined4 *)(unaff_EBP + 0x14);
    iStack_4c = *(undefined4 *)(unaff_EBP + 0x10);
    *(uint *)(unaff_EBP + -0x40) = *(int *)(unaff_EBP + -0x14) + uVar2 * -0x28 + 0x28;
    *(uint *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + -0x14) + uVar2 * -0x28 + 0x50;
    iStack_50 = unaff_EBP + -0x44;
    *(undefined4 *)(unaff_EBP + -0x44) = 0x14;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0xff;
    uStack_54 = 0x71572a;
    iVar3 = (*DAT_0097b57c)();
    if (iVar3 != 0) {
      if (*(int *)(unaff_EBP + 8) == 0x203) {
        uVar1 = *(undefined4 *)
                 (*(int *)(*(int *)(unaff_EBP + -0x1c) + 100) + *(int *)(unaff_EBP + -0x10) * 4);
        iStack_4c = unaff_EBP + -0x20;
        iStack_50 = 0x71575b;
        uStack_48 = uVar1;
        FUN_0045a1d8();
        uStack_48 = 0xde4;
        iStack_4c = unaff_EBP + -0x2c;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        iStack_50 = 0x715771;
        puVar4 = (undefined4 *)FUN_00679d22();
        iStack_4c = *puVar4;
        *(undefined4 *)(unaff_EBP + -0x28) = 0;
        uStack_48 = *(undefined4 *)(unaff_EBP + -0x20);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iStack_50 = unaff_EBP + -0x28;
        uStack_54 = 0x715787;
        uStack_48 = FUN_00434e21();
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        iStack_4c = 0x715796;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 5;
        uStack_48 = 0x7157a2;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 4;
        uStack_48 = 0x7157ae;
        FUN_00414ebb();
        uStack_48 = 0;
        iStack_4c = 0;
        iStack_50 = 0;
        uStack_54 = 0;
        *(undefined1 **)(unaff_EBP + -0x34) = auStack_58;
        FUN_00450368(unaff_EBP + -0x18);
        iVar5 = FUN_007db791();
        if (iVar5 == 6) {
          iStack_4c = 0x71581c;
          uStack_48 = uVar1;
          FUN_00718ea5();
          uStack_48 = 0x715827;
          FUN_0083cb3e();
          *(undefined1 *)(unaff_EBP + -4) = 0;
          uStack_48 = 0x715832;
          FUN_00414ebb();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          uStack_48 = 0x71583e;
          FUN_00414ebb();
          goto LAB_0071584b;
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        uStack_48 = 0x7157d9;
        FUN_00414ebb();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        uStack_48 = 0x7157e5;
        FUN_00414ebb();
        iVar5 = *(int *)(unaff_EBP + -0x30);
      }
      else if ((*(int *)(unaff_EBP + 8) == 0x202) &&
              (*(int *)(iVar5 + 0x78) != *(int *)(unaff_EBP + -0x10))) {
        uStack_48 = 0;
        *(int *)(iVar5 + 0x78) = *(int *)(unaff_EBP + -0x10);
        iStack_4c = 0x715807;
        FUN_008161f1();
      }
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x28;
  }
  uStack_48 = 0x71584b;
  FUN_0074d6fb();
LAB_0071584b:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


