/* FUN_004707e6 - 0x004707e6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004707e6(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(undefined4 **)(unaff_EBP + 8) == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = **(undefined4 **)(unaff_EBP + 8);
  }
  puVar1 = *(undefined4 **)(unaff_EBP + 0x10);
  iVar3 = (**(code **)(*extraout_ECX + 0x24))
                    (extraout_ECX,uVar2,*(undefined4 *)(unaff_EBP + 0xc),*puVar1,puVar1[1],puVar1[2]
                     ,puVar1[3],unaff_EBP + 0x10);
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,extraout_ECX,&DAT_00964158);
  }
  uVar2 = *(undefined4 *)(unaff_EBP + 0x10);
  if (*(int *)(unaff_EBP + 8) != 0) {
    FUN_004030b1();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


