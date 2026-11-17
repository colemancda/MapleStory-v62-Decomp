/* FUN_00715569 - 0x00715569 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00715569(void)

{
  int iVar1;
  int iVar2;
  int *extraout_ECX;
  int unaff_EBP;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_00879bb8();
  uVar3 = -(uint)(extraout_ECX[0x20] != 0) & 5;
  *(int *)(unaff_EBP + -0x18) = DAT_00979174 + 100;
  *(uint *)(unaff_EBP + -0x14) = uVar3 + 5;
  *(uint *)(unaff_EBP + -0x10) = uVar3 * 0x28;
  uVar4 = uVar3;
  while( true ) {
    iVar1 = 0;
    if (**(int **)(unaff_EBP + -0x18) != 0) {
      iVar1 = *(int *)(**(int **)(unaff_EBP + -0x18) + -4);
    }
    if (*(int *)(unaff_EBP + -0x14) <= iVar1) {
      iVar1 = *(int *)(unaff_EBP + -0x14);
    }
    if (iVar1 <= (int)uVar4) break;
    *(uint *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x10) + uVar3 * -0x28 + 0x28;
    *(uint *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x10) + uVar3 * -0x28 + 0x50;
    *(undefined4 *)(unaff_EBP + -0x30) = 0x14;
    *(undefined4 *)(unaff_EBP + -0x28) = 0xff;
    iVar1 = (*DAT_0097b57c)(unaff_EBP + -0x30,*(undefined4 *)(unaff_EBP + 8),
                            *(undefined4 *)(unaff_EBP + 0xc));
    if (iVar1 != 0) {
      FUN_00554ef3(unaff_EBP + -0x20,*(undefined4 *)(**(int **)(unaff_EBP + -0x18) + uVar4 * 4));
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        uVar8 = 0;
        uVar7 = 0;
        uVar6 = 0;
        uVar5 = *(undefined4 *)(unaff_EBP + -0x1c);
        iVar1 = (**(code **)(*extraout_ECX + 0x30))(uVar5,0,0,0);
        iVar1 = iVar1 + 0x14 + *(int *)(unaff_EBP + 0xc);
        iVar2 = (**(code **)(*extraout_ECX + 0x2c))(iVar1);
        FUN_00759767(iVar2 + 0x14 + *(int *)(unaff_EBP + 8),iVar1,uVar5,uVar6,uVar7,uVar8);
        if (extraout_ECX[0x1f] != uVar4) {
          extraout_ECX[0x1f] = uVar4;
        }
        FUN_008161f1(0);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x1c) != 0) {
          FUN_00449913(0);
        }
        goto LAB_00715683;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
    uVar4 = uVar4 + 1;
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x28;
  }
  FUN_0074d6fb();
LAB_00715683:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


