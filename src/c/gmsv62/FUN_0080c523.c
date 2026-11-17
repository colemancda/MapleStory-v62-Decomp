/* FUN_0080c523 - 0x0080c523 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0080c523(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffdc;
  uVar3 = 1;
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  if (*(int *)(extraout_ECX + 0x5e0) == 0) {
    if (*(int *)(extraout_ECX + 0x59c) != 0) {
      uVar3 = FUN_00402fed(*(undefined4 *)(unaff_EBP + 8));
      *(undefined4 *)(unaff_EBP + 8) = uVar3;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      *(undefined2 *)(unaff_EBP + -0x24) = 3;
      *(undefined4 *)(unaff_EBP + -0x1c) = 2;
      piVar1 = *(int **)(extraout_ECX + 0x59c);
      iVar2 = *piVar1;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      uVar4 = (**(code **)(iVar2 + 0x2c))(piVar1,uVar3,unaff_EBP + -0x24,0,0,0);
      *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00402bc3(unaff_EBP + -0x24);
      uVar3 = FUN_0080c59e(uVar3);
      return uVar3;
    }
    uVar3 = *(undefined4 *)(unaff_EBP + -0x14);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


