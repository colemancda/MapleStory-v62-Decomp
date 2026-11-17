/* FUN_004c1115 - 0x004c1115 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_004c1115(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int local_c;
  int local_8;
  
  local_c = param_1;
  local_8 = param_1;
  FUN_00455c59(&local_c);
  iVar6 = 0;
  if (local_8 != 0) {
    FUN_0045e7c2(0);
  }
  iVar2 = FUN_00458c4f(&local_c,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  iVar2 = *(int *)(iVar2 + 4);
  if (local_8 != 0) {
    FUN_00449913(0);
  }
  if (iVar2 != 0) {
    iVar2 = FUN_0045e2eb();
    if ((((((*(int *)(param_1 + 0x10) != 2) || (iVar3 = iVar2 / 10000, iVar3 == 200)) ||
          (iVar3 == 0xc9)) ||
         (((iVar3 == 0xca || (iVar3 == 0xcd)) ||
          ((iVar3 == 0xdd || ((iVar3 == 0xec || (iVar3 == 0xee)))))))) || (iVar3 == 0xd4)) ||
       ((((iVar3 == 0xe2 || (iVar3 == 0xe3)) || (iVar2 / 1000 == 0x83d)) || (iVar2 == 0x200b63)))) {
      local_8 = iVar2;
      if ((*(int *)(param_1 + 0x10) == 5) && (iVar3 = FUN_0048b8d9(iVar2), iVar3 != 6)) {
        iVar2 = FUN_0048b5b3(iVar2);
        if ((iVar2 < 8) || ((0xb < iVar2 && (iVar2 != 0x25)))) {
          iVar2 = 0;
        }
        if (iVar2 != 9) {
          return 0;
        }
      }
      iVar2 = DAT_00979110;
      iVar3 = (-(uint)(param_2 != 0) & 0xffffffaf) + 0x59;
      if (0 < iVar3) {
        do {
          if (param_2 == 0) {
            iVar5 = iVar6;
            if (iVar6 == 0x36) {
              iVar5 = 0x2a;
            }
            pcVar4 = (char *)(iVar5 * 5 + 4 + iVar2);
          }
          else {
            pcVar4 = (char *)FUN_0051c36a(iVar6);
          }
          cVar1 = *pcVar4;
          if ((((cVar1 == '\x02') || (cVar1 == '\x03')) || (cVar1 == '\a')) &&
             (*(int *)(pcVar4 + 1) == local_8)) {
            *pcVar4 = '\0';
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar3);
      }
      FUN_008161f1(0);
      if (DAT_009791a0 == 0) {
        if (param_2 != 0) {
          FUN_0051c175();
        }
      }
      else {
        FUN_008161f1(0);
      }
      return 1;
    }
  }
  return 0;
}


