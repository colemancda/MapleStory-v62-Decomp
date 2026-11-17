/* ptr_0085c038 - 0x0085c038 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0085c038(void)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 uVar7;
  int iStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x85c03f;
  uStack_4 = FUN_0042459a();
  iStack_8 = 0x85c04b;
  iVar3 = FUN_0085cc85();
  *(int *)(unaff_EBP + 8) = iVar3;
  if (-1 < iVar3) {
    uStack_4 = 0x85c05d;
    bVar2 = FUN_0042452b();
    uStack_4 = 0x85c068;
    iVar4 = FUN_0042459a();
    piVar1 = *(int **)(unaff_ESI + 0x2c74);
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(piVar1[1] + *(int *)(unaff_EBP + 8) * 4);
    iVar6 = *(int *)(unaff_EBP + 8) * 0x16;
    iVar3 = *(int *)(iVar6 + 0x12 + *piVar1);
    *(int *)(unaff_EBP + -0x14) = iVar3;
    if ((iVar3 != iVar4) || (*(uint *)(unaff_EBP + -0x10) != (uint)bVar2)) {
      iVar3 = *(int *)(unaff_EBP + 8);
      *(int *)(*piVar1 + 0x12 + iVar6) = iVar4;
      *(uint *)(*(int *)(*(int *)(unaff_ESI + 0x2c74) + 4) + iVar3 * 4) = (uint)bVar2;
      if ((*(int *)(unaff_EBP + -0x14) < 0) && (-1 < iVar4)) {
        iStack_8 = **(int **)(unaff_ESI + 0x2c74) + 4 + iVar6;
        uStack_4 = 0xffffffff;
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        FUN_00414edd();
        iStack_8 = unaff_EBP + -0x14;
        *(undefined4 **)(unaff_EBP + -0x10) = &uStack_4;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        uStack_4 = 0;
        FUN_00414f8b();
        iStack_8 = 0x85c0f2;
        iVar3 = FUN_0085692b();
        if (iVar3 == 0) {
          uStack_4 = 0x110;
          iStack_8 = 0x85c105;
          iVar3 = FUN_004029b9();
          *(int *)(unaff_EBP + -0x10) = iVar3;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (iVar3 == 0) {
            *(undefined4 *)(unaff_EBP + -0x10) = 0;
          }
          else {
            uStack_4 = 0x85c117;
            uVar5 = FUN_004defeb();
            *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          uStack_4 = 0;
          *(int **)(unaff_EBP + -0x1c) = &iStack_8;
          uVar7 = 0xffffffff;
          uVar5 = *(undefined4 *)(unaff_EBP + 8);
          FUN_0085cdcf(uVar5,0xffffffff);
          iVar3 = FUN_0085cf52(uVar5);
          FUN_0045f0f3(iVar3 + 4,uVar7);
          FUN_004e1c6a();
          uStack_4 = *(undefined4 *)(unaff_EBP + -0x10);
          iStack_8 = 0x85c15e;
          FUN_008497ad();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        uStack_4 = 0x85c16a;
        FUN_00414ebb();
      }
      else if ((*(int *)(unaff_EBP + -0x14) != iVar4) && (iVar4 == *(int *)(unaff_ESI + 0x204c))) {
        uStack_4 = 0x110;
        iStack_8 = 0x85c188;
        iVar3 = FUN_004029b9();
        *(int *)(unaff_EBP + -0x1c) = iVar3;
        *(undefined4 *)(unaff_EBP + -4) = 2;
        if (iVar3 == 0) {
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
        }
        else {
          uStack_4 = 0x85c19d;
          uVar5 = FUN_004defeb();
          *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        uStack_4 = 1;
        *(int **)(unaff_EBP + -0x1c) = &iStack_8;
        uVar7 = 0xffffffff;
        uVar5 = *(undefined4 *)(unaff_EBP + 8);
        FUN_0085cdcf(uVar5,0xffffffff);
        iVar3 = FUN_0085cf52(uVar5);
        FUN_0045f0f3(iVar3 + 4,uVar7);
        FUN_004e1c6a();
        uStack_4 = *(undefined4 *)(unaff_EBP + -0x14);
        iStack_8 = 0x85c1e5;
        FUN_008497ad();
      }
      if (DAT_0097bef4 != 0) {
        uStack_4 = 0x85c2dc;
        FUN_0077e45e();
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


