/* ptr_007da3a1 - 0x007da3a1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_007da3a1(int param_1)

{
  int iVar1;
  int iVar2;
  int in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  iVar1 = *(int *)(param_1 + 0x74);
  iVar2 = FUN_007da3fd();
  in_stack_00000010 = in_stack_00000010 + ((iVar1 != 0x3ea) - 1 & 0x17) + 0x4c + iVar2 * 0x14;
  FUN_00814535(0x10b,(600 - in_stack_00000010) / 2,0x10a,in_stack_00000010,in_stack_00000014,
               in_stack_00000018,in_stack_0000001c);
  return;
}


