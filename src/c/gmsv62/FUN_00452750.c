/* FUN_00452750 - 0x00452750 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00452750(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    if (((*(char *)(param_1 + 0x134) != '\x02') &&
        ((((iVar1 = *(int *)(param_2 + 4), iVar1 == 0x100 || (iVar1 == 0x101)) || (iVar1 == 0x104))
         || (iVar1 == 0x105)))) &&
       ((*DAT_0097b568)(*(undefined4 *)(param_1 + 0x18),iVar1,*(undefined4 *)(param_2 + 8),
                        *(undefined4 *)(param_2 + 0xc)), *(char *)(param_1 + 0x134) == '\0')) {
      return;
    }
    if (((*(char *)(param_1 + 0x135) != '\x02') &&
        (((((iVar1 = *(int *)(param_2 + 4), iVar1 == 0x200 || (iVar1 == 0x201)) ||
           ((iVar1 == 0x203 || ((iVar1 == 0x202 || (iVar1 == 0x204)))))) || (iVar1 == 0x206)) ||
         ((iVar1 == 0x205 || (iVar1 == 0x20a)))))) &&
       ((*DAT_0097b568)(*(undefined4 *)(param_1 + 0x18),iVar1,*(undefined4 *)(param_2 + 8),
                        *(undefined4 *)(param_2 + 0xc)), *(char *)(param_1 + 0x135) == '\0')) {
      return;
    }
    iVar1 = *(int *)(param_2 + 8);
    if ((((iVar1 == 9) || (iVar1 == 0x1b)) || (iVar1 == 0x2e)) &&
       (((iVar2 = *(int *)(param_2 + 4), iVar2 == 0x100 || (iVar2 == 0x101)) ||
        ((iVar2 == 0x104 || (iVar2 == 0x105)))))) {
      (*DAT_0097b568)(*(undefined4 *)(param_1 + 0x14),iVar2,iVar1,*(undefined4 *)(param_2 + 0xc));
    }
    else if (((*(int *)(param_2 + 4) == 0x100) && (*(int *)(param_1 + 0x1c) != 0)) &&
            ((iVar1 == 0x56 && (sVar3 = (*DAT_0097b564)(0x11), sVar3 < 0)))) {
      (**(code **)(**(int **)(param_1 + 0x1c) + 0xd8))(*(int **)(param_1 + 0x1c),0xd,2,0,0);
    }
  }
  return;
}


