/* FUN_0085c9b5 - 0x0085c9b5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0085c9b5(void)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  undefined4 uVar3;
  int unaff_EBP;
  undefined4 *puVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_00879bb8();
  uStack_1c = 1;
  uStack_20 = 0x85c9ce;
  iVar2 = FUN_00849a47();
  if (iVar2 == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    while( true ) {
      piVar1 = *(int **)(extraout_ECX + 0x2c74);
      uStack_1c = 0x85c9e9;
      FUN_0085cd50();
      uVar3 = 0;
      if (*piVar1 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*piVar1 + -4);
      }
      if (iVar2 <= *(int *)(unaff_EBP + -0x10)) break;
      puVar4 = (undefined4 *)(*(int *)(unaff_EBP + -0x14) + **(int **)(extraout_ECX + 0x2c74));
      if (*(char *)((int)puVar4 + 0x11) == '\x01') {
        uStack_1c = 0x110;
        uStack_20 = 0x85ca1d;
        iVar2 = FUN_004029b9();
        *(int *)(unaff_EBP + -0x18) = iVar2;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        if (iVar2 != 0) {
          uStack_1c = 0x85ca2e;
          uVar3 = FUN_004defeb();
        }
        uStack_1c = *puVar4;
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *(undefined4 **)(unaff_EBP + -0x18) = &uStack_20;
        FUN_0045f0f3(puVar4 + 1,0xffffffff);
        FUN_004e0fa1();
        uStack_20 = 0x85ca56;
        uStack_1c = uVar3;
        FUN_008497ad();
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x16;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


