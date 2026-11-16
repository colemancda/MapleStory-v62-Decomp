/* FUN_50c10dc6 - 0x50c10dc6 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


short * FUN_50c10dc6(void)

{
  char cVar1;
  short sVar2;
  int iVar3;
  LPWSTR lpWideCharStr;
  short *psVar4;
  int unaff_EBP;
  char *pcVar5;
  int cbMultiByte;
  
  FUN_50c10270();
  cVar1 = *(char *)(unaff_EBP + 0xc);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffeec;
  pcVar5 = (char *)(unaff_EBP + -0x114);
  if (((cVar1 != '\0') && (cVar1 != '\r')) && (cVar1 != '\n')) {
    *(char *)(unaff_EBP + -0x114) = cVar1;
    pcVar5 = (char *)(unaff_EBP + -0x113);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
LAB_50c10e08:
  if (0xfe < (uint)((int)pcVar5 - (unaff_EBP + -0x114))) goto LAB_50c10e39;
  iVar3 = (**(code **)(**(int **)(unaff_EBP + 8) + 0x14))(pcVar5,1);
  if (iVar3 != 0) goto code_r0x50c10e2c;
  psVar4 = (short *)0x0;
LAB_50c10eb2:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return psVar4;
code_r0x50c10e2c:
  if (*pcVar5 != '\r') {
    if (*pcVar5 == '\n') {
LAB_50c10e39:
      cbMultiByte = (int)pcVar5 - (unaff_EBP + -0x114);
      iVar3 = MultiByteToWideChar(0,0,(LPCSTR)(unaff_EBP + -0x114),cbMultiByte,(LPWSTR)0x0,0);
      *(int *)(unaff_EBP + 0xc) = iVar3;
      lpWideCharStr = (LPWSTR)FUN_50c02a35(0,iVar3);
      *(LPWSTR *)(unaff_EBP + -0x14) = lpWideCharStr;
      MultiByteToWideChar(0,0,(LPCSTR)(unaff_EBP + -0x114),cbMultiByte,lpWideCharStr,
                          *(int *)(unaff_EBP + 0xc));
      psVar4 = FUN_50c10ec1(*(short **)(unaff_EBP + -0x14));
      if (psVar4 != (short *)0x0) {
        sVar2 = *psVar4;
        if (((sVar2 != 0) && (sVar2 != 0x23)) && ((sVar2 != 0x2f && (sVar2 != 0x27))))
        goto LAB_50c10eb2;
        (*DAT_50c211e8)(psVar4 + -2);
      }
      pcVar5 = (char *)(unaff_EBP + -0x114);
    }
    else {
      pcVar5 = pcVar5 + 1;
    }
  }
  goto LAB_50c10e08;
}


