/* FUN_0052621f - 0x0052621f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0052621f(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int in_stack_00000018;
  int in_stack_00000028;
  
  if (param_2 < in_stack_00000018) {
    if (in_stack_00000018 < in_stack_00000028) {
LAB_0052624d:
      puVar1 = &stack0x00000018;
      goto LAB_00526250;
    }
    puVar1 = &stack0x00000028;
    if (param_2 < in_stack_00000028) goto LAB_00526250;
  }
  else if (in_stack_00000028 <= param_2) {
    puVar1 = &stack0x00000028;
    if (in_stack_00000018 < in_stack_00000028) goto LAB_00526250;
    goto LAB_0052624d;
  }
  puVar1 = &param_2;
LAB_00526250:
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[3] = puVar1[3];
  return;
}


