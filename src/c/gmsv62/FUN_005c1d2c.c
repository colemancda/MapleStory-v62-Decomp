/* FUN_005c1d2c - 0x005c1d2c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_005c1d2c(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(undefined4 **)(unaff_EBP + 0x10) == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = **(undefined4 **)(unaff_EBP + 0x10);
  }
  puVar1 = *(undefined4 **)(unaff_EBP + 0x1c);
  puVar2 = *(undefined4 **)(unaff_EBP + 0x18);
  iVar4 = (**(code **)(*extraout_ECX + 0x30))
                    (extraout_ECX,*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                     uVar3,*(undefined4 *)(unaff_EBP + 0x14),*puVar2,puVar2[1],puVar2[2],puVar2[3],
                     *puVar1,puVar1[1],puVar1[2],puVar1[3],unaff_EBP + 0x1c);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,extraout_ECX,&DAT_00964158);
  }
  uVar3 = *(undefined4 *)(unaff_EBP + 0x1c);
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_004030b1();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


