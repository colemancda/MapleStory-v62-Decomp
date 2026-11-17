/* FUN_0045cdbc - 0x0045cdbc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0045cdbc(void)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar4 = *(int *)(extraout_ECX + 0x14);
  uVar1 = *(ushort *)(extraout_ECX + 0xc);
  iVar2 = *(int *)(extraout_ECX + 8);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_0045ce2b(unaff_EBP + -0x10,iVar2 + iVar4,(uint)uVar1 - iVar4);
  *(int *)(extraout_ECX + 0x14) = *(int *)(extraout_ECX + 0x14) + iVar4;
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  *puVar3 = 0;
  FUN_00414f8b(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar3;
}


