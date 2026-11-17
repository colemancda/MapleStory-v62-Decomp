/* FUN_00401a1d - 0x00401a1d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00401a1d(void)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 extraout_ECX;
  uint uVar5;
  uint uVar6;
  int unaff_EBP;
  int iVar7;
  int iVar8;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(*(int *)(unaff_EBP + 8) + 4);
  iVar8 = *(int *)(*(int *)(unaff_EBP + 0xc) + 4);
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  *(int *)(unaff_EBP + -0x1c) = iVar8;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined ***)(unaff_EBP + -0x40) = &PTR_FUN_008e848c;
  uVar6 = *(uint *)(iVar8 + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  do {
    while( true ) {
      if (uVar6 == 0) {
        iVar8 = *(int *)(unaff_EBP + 8);
        iVar7 = *(int *)(unaff_EBP + -0x2c) / iVar8 - *(int *)(unaff_EBP + -0x24) / iVar8;
        iVar8 = *(int *)(unaff_EBP + -0x28) / iVar8 - *(int *)(unaff_EBP + -0x20) / iVar8;
        uVar6 = *(uint *)(unaff_EBP + -0x34);
        while (uVar6 != 0) {
          iVar1 = *(int *)((-(uint)(uVar6 != 0) & uVar6 - 0x10) + 4);
          FUN_00403634(uVar6);
          iVar4 = FUN_00401bda(uVar6);
          *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + iVar7;
          *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + iVar8;
          uVar6 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
        }
        uVar6 = *(uint *)(*(int *)(unaff_EBP + -0x18) + 0x10);
        while (uVar6 != 0) {
          iVar1 = *(int *)((-(uint)(uVar6 != 0) & uVar6 - 0x10) + 4);
          uVar5 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
          iVar1 = *(int *)(uVar6 + 4);
          uVar6 = uVar5;
          if (*(int *)(iVar1 + 0x18) == *(int *)(unaff_EBP + -0x1c)) {
            uVar2 = *(undefined4 *)(unaff_EBP + -0x10);
            *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + iVar7;
            *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + iVar8;
            *(undefined4 *)(iVar1 + 0x18) = uVar2;
          }
        }
        FUN_004034e3(*(undefined4 *)(unaff_EBP + 0xc));
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *(undefined ***)(unaff_EBP + -0x40) = &PTR_FUN_008e848c;
        FUN_00403672();
        ExceptionList = *(void **)(unaff_EBP + -0xc);
        return;
      }
      iVar8 = *(int *)((-(uint)(uVar6 != 0) & uVar6 - 0x10) + 4);
      uVar5 = -(uint)(iVar8 != 0) & iVar8 + 0x10U;
      iVar8 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0xc);
      if (iVar8 != 0) break;
LAB_00401acf:
      FUN_00403634();
      FUN_00401bda(uVar6);
      uVar6 = uVar5;
    }
    while( true ) {
      iVar7 = *(int *)((-(uint)(iVar8 != 0) & iVar8 - 0x10U) + 4);
      *(uint *)(unaff_EBP + -0x14) = -(uint)(iVar7 != 0) & iVar7 + 0x10U;
      cVar3 = FUN_00402f72(iVar8);
      if (cVar3 != '\0') break;
      if (*(int *)(unaff_EBP + -0x14) == 0) goto LAB_00401acf;
      iVar8 = *(int *)(unaff_EBP + -0x14);
    }
    *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + *(int *)(iVar8 + 4);
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + *(int *)(iVar8 + 8);
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + *(int *)(uVar6 + 4);
    iVar8 = *(int *)(uVar6 + 8);
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + iVar8;
    uVar6 = uVar5;
  } while( true );
}


