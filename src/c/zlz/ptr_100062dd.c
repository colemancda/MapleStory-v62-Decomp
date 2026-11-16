/* ptr_100062dd - 0x100062dd in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void ptr_100062dd(void)

{
  undefined4 *unaff_EBX;
  int unaff_EBP;
  uint unaff_ESI;
  int unaff_EDI;
  int in_stack_00000014;
  undefined4 in_stack_00000048;
  int *in_stack_0000004c;
  
  *unaff_EBX = 9;
  in_stack_0000004c[6] = (int)s_invalid_block_type_1001024c;
  unaff_EBX[7] = unaff_EBP + -3;
  unaff_EBX[8] = unaff_ESI >> 3;
  in_stack_0000004c[1] = in_stack_00000014;
  in_stack_0000004c[2] = in_stack_0000004c[2] + (unaff_EDI - *in_stack_0000004c);
  *in_stack_0000004c = unaff_EDI;
  unaff_EBX[0xd] = in_stack_00000048;
  FUN_10008290((int)unaff_EBX,(int)in_stack_0000004c,-3);
  return;
}


