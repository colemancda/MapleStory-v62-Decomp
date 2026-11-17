/* ptr_0047141f - 0x0047141f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_0047141f(int param_1)

{
  char *pcVar1;
  char cVar2;
  char *in_EAX;
  int unaff_ESI;
  char *in_stack_00000010;
  
  while (param_1 == unaff_ESI) {
    pcVar1 = in_EAX + 1;
    in_EAX = in_EAX + 1;
    param_1 = (int)*pcVar1;
  }
  cVar2 = *in_EAX;
  while ((cVar2 != unaff_ESI && (cVar2 != '\0'))) {
    *in_stack_00000010 = cVar2;
    pcVar1 = in_EAX + 1;
    in_stack_00000010 = in_stack_00000010 + 1;
    in_EAX = in_EAX + 1;
    cVar2 = *pcVar1;
  }
  *in_stack_00000010 = '\0';
  return;
}


