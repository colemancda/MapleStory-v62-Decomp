/* FUN_004d8b3d - 0x004d8b3d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004d8b3d(void)

{
  int iVar1;
  int in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  iVar1 = FUN_004d8b7f();
  iVar1 = in_stack_00000010 + 0x4c + iVar1 * 0x14;
  FUN_00814535(0x10b,(600 - iVar1) / 2,0x10a,iVar1,in_stack_00000014,in_stack_00000018,
               in_stack_0000001c);
  return;
}


