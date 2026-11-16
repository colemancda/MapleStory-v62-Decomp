/* ptr_1000667a - 0x1000667a in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void ptr_1000667a(void)

{
  int iVar1;
  int iVar2;
  undefined4 *unaff_EBX;
  undefined4 unaff_EBP;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_00000048;
  int *in_stack_0000004c;
  int in_stack_00000050;
  
  unaff_EBX[0xd] = in_stack_00000048;
  iVar2 = FUN_10008290((int)unaff_EBX,(int)in_stack_0000004c,in_stack_00000050);
  iVar1 = unaff_EBX[0xd];
  if (unaff_EBX[0xc] != iVar1) {
    unaff_EBX[8] = in_stack_00000018;
    unaff_EBX[7] = unaff_EBP;
    in_stack_0000004c[1] = in_stack_00000014;
    in_stack_0000004c[2] = in_stack_0000004c[2] + (in_stack_00000010 - *in_stack_0000004c);
    *in_stack_0000004c = in_stack_00000010;
    unaff_EBX[0xd] = iVar1;
    FUN_10008290((int)unaff_EBX,(int)in_stack_0000004c,iVar2);
    return;
  }
  *unaff_EBX = 8;
  unaff_EBX[8] = in_stack_00000018;
  unaff_EBX[7] = unaff_EBP;
  in_stack_0000004c[1] = in_stack_00000014;
  in_stack_0000004c[2] = in_stack_0000004c[2] + (in_stack_00000010 - *in_stack_0000004c);
  *in_stack_0000004c = in_stack_00000010;
  unaff_EBX[0xd] = iVar1;
  FUN_10008290((int)unaff_EBX,(int)in_stack_0000004c,1);
  return;
}


