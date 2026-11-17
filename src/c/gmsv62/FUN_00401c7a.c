/* FUN_00401c7a - 0x00401c7a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00401c7a(void)

{
  short sVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  short *psVar9;
  int iVar10;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0x1f;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined ***)(unaff_EBP + -0x34) = &PTR_FUN_008e8490;
  *(undefined4 *)(unaff_EBP + -0x24) = 100;
  *(undefined4 *)(unaff_EBP + -0x20) = 0x18;
  piVar3 = *(int **)(extraout_ECX + 0x38);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((piVar3 == (int *)0x0) || (iVar4 = *piVar3, iVar4 == 0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(uint *)(iVar4 + -4) >> 1;
  }
  if (uVar8 != 0) {
    if (*(undefined4 **)(extraout_ECX + 0x38) == (undefined4 *)0x0) {
      psVar9 = (short *)0x0;
    }
    else {
      psVar9 = (short *)**(undefined4 **)(extraout_ECX + 0x38);
    }
    sVar1 = *psVar9;
    while (sVar1 != 0) {
      sVar2 = psVar9[1];
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      *(uint *)(unaff_EBP + -0x10) = CONCAT22(sVar1,sVar2);
      FUN_004036fc(unaff_EBP + -0x10,unaff_EBP + -0x14);
      psVar9 = psVar9 + 2;
      sVar1 = *psVar9;
    }
  }
  uVar8 = *(uint *)(extraout_ECX + 0x10);
  do {
    if (uVar8 == 0) {
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined ***)(unaff_EBP + -0x34) = &PTR_FUN_008e8490;
      FUN_004037ca();
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    iVar4 = *(int *)(uVar8 + 4);
    iVar10 = *(int *)((-(uint)(uVar8 != 0) & uVar8 - 0x10) + 4);
    uVar8 = -(uint)(iVar10 != 0) & iVar10 + 0x10U;
    *(undefined4 *)(iVar4 + 0x14) = 1;
    puVar5 = *(undefined4 **)(*(int *)(iVar4 + 0x20) + 0x14);
    if (puVar5 == (undefined4 *)0x0) {
      psVar9 = (short *)0x0;
    }
    else {
      psVar9 = (short *)*puVar5;
    }
    for (; sVar1 = *psVar9, sVar1 != 0; psVar9 = psVar9 + 2) {
      sVar2 = psVar9[1];
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      *(uint *)(unaff_EBP + -0x10) = CONCAT22(sVar1,sVar2);
      iVar10 = FUN_004036ac(unaff_EBP + -0x10,unaff_EBP + -0x14);
      if (iVar10 != 0) {
        iVar10 = *(int *)(unaff_EBP + -0x14);
        if (iVar10 != 0) {
          iVar6 = *(int *)(*(int *)(iVar10 + 0x20) + 0x18);
          iVar7 = *(int *)(*(int *)(iVar4 + 0x20) + 0x18);
          if (iVar6 == iVar7) goto LAB_00401dbf;
          if (iVar6 - iVar7 < 0) {
            *(undefined4 *)(iVar10 + 0x14) = 0;
            *(int *)(unaff_EBP + -0x1c) = iVar4;
            iVar10 = unaff_EBP + -0x1c;
            goto LAB_00401db2;
          }
        }
        *(undefined4 *)(iVar4 + 0x14) = 0;
        break;
      }
      *(int *)(unaff_EBP + -0x18) = iVar4;
      iVar10 = unaff_EBP + -0x18;
LAB_00401db2:
      FUN_004036fc(unaff_EBP + -0x10,iVar10);
LAB_00401dbf:
    }
  } while( true );
}


