/* FUN_00598ef0 - 0x00598ef0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00598ef0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = *(uint *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if ((((int)uVar1 < 0) || (iVar2 = *(int *)(extraout_ECX + 0x2c), iVar2 == 0)) ||
     (*(uint *)(iVar2 + -4) <= uVar1)) {
    puVar3 = *(undefined4 **)(unaff_EBP + 8);
    *puVar3 = 0;
    FUN_00414edd(&DAT_00978474,0xffffffff);
  }
  else {
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    FUN_00414edd(iVar2 + 0xc + uVar1 * 0x1d,0xffffffff);
    iVar2 = *(int *)(extraout_ECX + 0x2c);
    puVar3 = *(undefined4 **)(unaff_EBP + 8);
    *puVar3 = 0;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_00414edd(iVar2 + 0xc + uVar1 * 0x1d,0xffffffff);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar3;
}


