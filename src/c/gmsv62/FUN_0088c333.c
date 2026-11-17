/* FUN_0088c333 - 0x0088c333 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0088c333(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  LPCSTR lpName;
  int *piVar5;
  bool bVar6;
  
  if (param_1 == (char *)0x0) {
    return 0xffffffff;
  }
  pcVar1 = (char *)FUN_0088c579(param_1,0x3d);
  if (pcVar1 == (char *)0x0) {
    return 0xffffffff;
  }
  if (param_1 == pcVar1) {
    return 0xffffffff;
  }
  bVar6 = pcVar1[1] == '\0';
  if (DAT_009806c8 == DAT_009806cc) {
    DAT_009806c8 = (int *)FUN_0088c512(DAT_009806c8);
  }
  if (DAT_009806c8 == (int *)0x0) {
    if ((param_2 == 0) || (DAT_009806d0 == (undefined4 *)0x0)) {
      if (bVar6) {
        return 0;
      }
      DAT_009806c8 = _malloc(4);
      if (DAT_009806c8 == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_009806c8 = 0;
      if (DAT_009806d0 == (undefined4 *)0x0) {
        DAT_009806d0 = _malloc(4);
        if (DAT_009806d0 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_009806d0 = 0;
      }
    }
    else {
      iVar2 = FUN_0088c01d();
      if (iVar2 != 0) {
        return 0xffffffff;
      }
    }
  }
  piVar3 = DAT_009806c8;
  iVar2 = FUN_0088c4ba(param_1,(int)pcVar1 - (int)param_1);
  if ((iVar2 < 0) || (*piVar3 == 0)) {
    if (bVar6) {
      return 0;
    }
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    piVar3 = (int *)FUN_0087d53a(piVar3,iVar2 * 4 + 8);
    if (piVar3 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar3[iVar2] = (int)param_1;
    piVar3[iVar2 + 1] = 0;
  }
  else {
    if (!bVar6) {
      piVar3[iVar2] = (int)param_1;
      goto LAB_0088c467;
    }
    piVar5 = piVar3 + iVar2;
    FUN_0087aa78(piVar3[iVar2]);
    for (; *piVar5 != 0; piVar5 = piVar5 + 1) {
      iVar2 = iVar2 + 1;
      *piVar5 = piVar5[1];
    }
    piVar3 = (int *)FUN_0087d53a(piVar3,iVar2 << 2);
    if (piVar3 == (int *)0x0) goto LAB_0088c467;
  }
  DAT_009806c8 = piVar3;
LAB_0088c467:
  if (param_2 != 0) {
    sVar4 = _strlen(param_1);
    lpName = _malloc(sVar4 + 2);
    if (lpName != (LPCSTR)0x0) {
      FUN_0087b200(lpName,param_1);
      pcVar1[(int)lpName - (int)param_1] = '\0';
      SetEnvironmentVariableA
                (lpName,(LPCSTR)(~-(uint)bVar6 & (uint)(pcVar1 + ((int)lpName - (int)param_1) + 1)))
      ;
      FUN_0087aa78(lpName);
    }
  }
  return 0;
}


