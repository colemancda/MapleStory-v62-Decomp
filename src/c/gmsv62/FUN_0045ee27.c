/* FUN_0045ee27 - 0x0045ee27 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * __thiscall FUN_0045ee27(int *param_1,undefined *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (param_2 == (undefined *)0x0) {
    param_2 = &DAT_00964610;
  }
  if ((((char *)*param_1 != (char *)0x0) && (cVar1 = *(char *)*param_1, cVar1 != '\0')) &&
     (iVar2 = FUN_0087b4c0(param_2,(int)cVar1), iVar2 != 0)) {
    pcVar3 = (char *)FUN_00415015(0,1);
    pcVar4 = pcVar3;
    do {
      pcVar4 = pcVar4 + 1;
      if (*pcVar4 == '\0') break;
      iVar2 = FUN_0087b4c0(param_2,(int)*pcVar4);
    } while (iVar2 != 0);
    iVar2 = *param_1;
    if (*pcVar4 == '\0') {
      *(undefined4 *)(iVar2 + -0xc) = 1;
      *(undefined1 *)*param_1 = 0;
      *(undefined4 *)(iVar2 + -4) = 0;
      FUN_00414f29();
    }
    else {
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + -4);
      }
      FUN_0087a3a0(pcVar3,pcVar4,pcVar3 + (iVar2 - (int)pcVar4));
      FUN_004150c0(pcVar3 + (iVar2 - (int)pcVar4));
    }
  }
  return param_1;
}


