/* FUN_0073d3e0 - 0x0073d3e0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0073d3e0(void)

{
  undefined2 *puVar1;
  short sVar2;
  undefined4 *puVar3;
  short *psVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int unaff_EBP;
  int iVar8;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  FUN_00419192(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  psVar4 = *(short **)(unaff_EBP + 0xc);
  sVar2 = *psVar4;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  if (sVar2 != 0x20) {
    iVar8 = 0;
    while( true ) {
      if (psVar4 == (short *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(uint *)(psVar4 + -2) >> 1;
      }
      if ((int)(uVar5 - 1) <= iVar8) goto LAB_0073d6d8;
      FUN_0046fd34(unaff_EBP + -0x10,iVar8,iVar8 + 2);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      FUN_00470891(&DAT_0096b6a4,0xffffffff);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uVar6 = FUN_005990fe(unaff_EBP + -0x1c);
      *(undefined4 *)(unaff_EBP + -0x24) = uVar6;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        FUN_00403384(*(int *)(unaff_EBP + -0x1c) + -0xc);
      }
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
        FUN_00470891(&DAT_00964da4,0xffffffff);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        uVar6 = FUN_0046fd34(unaff_EBP + -0x1c,iVar8 + 2,0xffffffff);
        *(undefined1 *)(unaff_EBP + -4) = 7;
        FUN_0046fc68(unaff_EBP + -0x24,unaff_EBP + -0x20);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        uVar6 = FUN_0046fc68(unaff_EBP + -0x28,uVar6);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        FUN_00419192(uVar6);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (*(int *)(unaff_EBP + -0x28) != 0) {
          FUN_00403384(*(int *)(unaff_EBP + -0x28) + -0xc);
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        if (*(int *)(unaff_EBP + -0x24) != 0) {
          FUN_00403384(*(int *)(unaff_EBP + -0x24) + -0xc);
        }
        *(undefined1 *)(unaff_EBP + -4) = 6;
        if (*(int *)(unaff_EBP + -0x1c) != 0) {
          FUN_00403384(*(int *)(unaff_EBP + -0x1c) + -0xc);
        }
        iVar8 = *(int *)(unaff_EBP + -0x20);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        goto LAB_0073d6b5;
      }
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      FUN_00470891(&DAT_0096b6a0,0xffffffff);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      uVar6 = FUN_005990fe(unaff_EBP + -0x1c);
      *(undefined4 *)(unaff_EBP + -0x24) = uVar6;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        FUN_00403384(*(int *)(unaff_EBP + -0x1c) + -0xc);
      }
      if (*(int *)(unaff_EBP + -0x24) != 0) break;
      sVar2 = *(short *)(*(int *)(unaff_EBP + 0xc) + iVar8 * 2);
      puVar1 = (undefined2 *)(*(int *)(unaff_EBP + 0xc) + iVar8 * 2);
      if (sVar2 == 0x5b) {
        *(undefined4 *)(unaff_EBP + -0x20) = 1;
LAB_0073d4f8:
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (*(int *)(unaff_EBP + -0x10) != 0) {
          FUN_00403384(*(int *)(unaff_EBP + -0x10) + -0xc);
        }
      }
      else {
        if (sVar2 == 0x5d) {
          *(undefined4 *)(unaff_EBP + -0x20) = 0;
          goto LAB_0073d4f8;
        }
        if (*(int *)(unaff_EBP + -0x20) == 0) {
          uVar6 = FUN_00748802(unaff_EBP + -0x28,CONCAT22((short)((uint)puVar1 >> 0x10),*puVar1));
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          FUN_00419192(uVar6);
          *(undefined1 *)(unaff_EBP + -4) = 4;
          FUN_00402676();
        }
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_00402676();
      }
      psVar4 = *(short **)(unaff_EBP + 0xc);
      iVar8 = iVar8 + 1;
    }
    if (*(int *)(DAT_00978368 + 0x2098) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(DAT_00978368 + 0x2098) + 4;
    }
    FUN_00470891(iVar7,0xffffffff);
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    FUN_00470891(&DAT_00964da4,0xffffffff);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    uVar6 = FUN_0046fd34(unaff_EBP + -0x1c,iVar8 + 2,0xffffffff);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_0046fc68(unaff_EBP + -0x24,unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    uVar6 = FUN_0046fc68(unaff_EBP + -0x28,uVar6);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    FUN_00419192(uVar6);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (*(int *)(unaff_EBP + -0x28) != 0) {
      FUN_00403384(*(int *)(unaff_EBP + -0x28) + -0xc);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      FUN_00403384(*(int *)(unaff_EBP + -0x24) + -0xc);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      FUN_00403384(*(int *)(unaff_EBP + -0x1c) + -0xc);
    }
    iVar8 = *(int *)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 4;
LAB_0073d6b5:
    if (iVar8 != 0) {
      FUN_00403384(iVar8 + -0xc);
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_00403384(*(int *)(unaff_EBP + -0x10) + -0xc);
    }
  }
LAB_0073d6d8:
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  *puVar3 = 0;
  FUN_00419192(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -0x2c) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar3;
}


