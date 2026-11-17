/* ptr_008867e8 - 0x008867e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_008867e8(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_EBP;
  uint uVar4;
  int *unaff_EDI;
  
  FUN_00886644();
  iVar1 = unaff_EDI[3];
  *(byte *)(unaff_EBP + -9) = *(byte *)(unaff_EBP + -9) | 0x80;
  FUN_0088666b(unaff_EBP + -0xc,iVar1);
  uVar4 = unaff_EDI[5] + *unaff_EDI << (0x1fU - (char)unaff_EDI[3] & 0x1f) |
          -(uint)(*(int *)(unaff_EBP + 8) != 0) & 0x80000000 | *(uint *)(unaff_EBP + -0xc);
  if (unaff_EDI[4] == 0x40) {
    puVar2 = *(undefined4 **)(unaff_EBP + 0xc);
    uVar3 = *(undefined4 *)(unaff_EBP + -8);
    puVar2[1] = uVar4;
    *puVar2 = uVar3;
  }
  else if (unaff_EDI[4] == 0x20) {
    **(uint **)(unaff_EBP + 0xc) = uVar4;
  }
  return 1;
}


