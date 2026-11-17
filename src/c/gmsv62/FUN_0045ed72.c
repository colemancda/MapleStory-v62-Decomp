/* FUN_0045ed72 - 0x0045ed72 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * __thiscall FUN_0045ed72(int *param_1,undefined *param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (param_2 == (undefined *)0x0) {
    param_2 = &DAT_00964610;
  }
  pcVar2 = (char *)*param_1;
  if (((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) &&
     (iVar1 = FUN_0087b4c0(param_2,(int)pcVar2[*(int *)(pcVar2 + -4) + -1]), iVar1 != 0)) {
    pcVar2 = (char *)FUN_00415015(0,1);
    if (*param_1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*param_1 + -4);
    }
    pcVar3 = pcVar2 + iVar1 + -2;
    if (pcVar2 <= pcVar3) {
      do {
        iVar1 = FUN_0087b4c0(param_2,(int)*pcVar3);
        if (iVar1 == 0) break;
        pcVar3 = pcVar3 + -1;
      } while (pcVar2 <= pcVar3);
      if (pcVar2 <= pcVar3) {
        pcVar3[1] = '\0';
        FUN_004150c0(pcVar3 + (1 - (int)pcVar2));
        return param_1;
      }
    }
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + -0xc) = 1;
    *(undefined1 *)*param_1 = 0;
    *(undefined4 *)(iVar1 + -4) = 0;
    FUN_00414f29();
  }
  return param_1;
}


