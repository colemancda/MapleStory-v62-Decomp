/* FUN_006fb6ed - 0x006fb6ed in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006fb6ed(void)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 extraout_var;
  int unaff_EBP;
  undefined4 uVar4;
  
  FUN_00879bb8();
  iVar3 = *(int *)(unaff_EBP + 8);
  if (iVar3 == 0x7d1) {
    FUN_00701905(0);
  }
  else if (iVar3 == 0x7d2) {
    iVar3 = FUN_006fb663(unaff_EBP + -0x1c);
    uVar4 = CONCAT22(extraout_var,**(undefined2 **)(iVar3 + 4));
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      FUN_00705e5b(0);
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
    }
    FUN_0084ba3d(uVar4);
    FUN_0083440a(uVar4,1);
  }
  else if (iVar3 == 0x7d3) {
    iVar3 = FUN_006fb663(unaff_EBP + -0x24);
    puVar2 = *(undefined2 **)(iVar3 + 4);
    uVar1 = *puVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_0084b9c7(CONCAT22((short)((uint)puVar2 >> 0x10),uVar1),0x897b50,0);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      FUN_00705e5b(0);
    }
  }
  else if (iVar3 == 0x7d4) {
    if (DAT_0097bdc4 == 0) {
      FUN_00705bdc();
    }
    iVar3 = FUN_006fb663(unaff_EBP + -0x14);
    puVar2 = *(undefined2 **)(iVar3 + 4);
    uVar1 = *puVar2;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_00702efc(CONCAT22((short)((uint)puVar2 >> 0x10),uVar1),0);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_00705e5b(0);
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
    FUN_006fc80c();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


