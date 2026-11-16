/* ptr_10006720 - 0x10006720 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void ptr_10006720(void)

{
  int iVar1;
  int unaff_EBX;
  undefined4 unaff_EBP;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_00000048;
  int *in_stack_0000004c;
  
  *(undefined4 *)(unaff_EBX + 0x20) = in_stack_00000018;
  *(undefined4 *)(unaff_EBX + 0x1c) = unaff_EBP;
  iVar1 = *in_stack_0000004c;
  in_stack_0000004c[1] = in_stack_00000014;
  *in_stack_0000004c = in_stack_00000010;
  in_stack_0000004c[2] = in_stack_0000004c[2] + (in_stack_00000010 - iVar1);
  *(undefined4 *)(unaff_EBX + 0x34) = in_stack_00000048;
  FUN_10008290(unaff_EBX,(int)in_stack_0000004c,-3);
  return;
}


