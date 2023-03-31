void LOGGER_init__(LOGGER *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MSG,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->LEVEL,LOGLEVEL__INFO,retain)
  __INIT_VAR(data__->TRIG0,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void LOGGER_body__(LOGGER *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  if ((__GET_VAR(data__->TRIG,) && !(__GET_VAR(data__->TRIG0,)))) {
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

   LogMessage(GetFbVar(LEVEL),(char*)GetFbVar(MSG, .body),GetFbVar(MSG, .len));
  
    #undef GetFbVar
    #undef SetFbVar
;
  };
  __SET_VAR(data__->,TRIG0,,__GET_VAR(data__->TRIG,));

  goto __end;

__end:
  return;
} // LOGGER_body__() 





void PYTHON_EVAL_init__(PYTHON_EVAL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->STATE,0,retain)
  __INIT_VAR(data__->BUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->PREBUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->TRIGM1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TRIGGED,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_EVAL_body__(PYTHON_EVAL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(0, data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // PYTHON_EVAL_body__() 





void PYTHON_POLL_init__(PYTHON_POLL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->STATE,0,retain)
  __INIT_VAR(data__->BUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->PREBUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->TRIGM1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TRIGGED,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_POLL_body__(PYTHON_POLL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(1,(PYTHON_EVAL*)(void*)data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // PYTHON_POLL_body__() 





void PYTHON_GEAR_init__(PYTHON_GEAR *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->N,0,retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  PYTHON_EVAL_init__(&data__->PY_EVAL,retain);
  __INIT_VAR(data__->COUNTER,0,retain)
  __INIT_VAR(data__->_TMP_ADD10_OUT,0,retain)
  __INIT_VAR(data__->_TMP_EQ13_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_SEL15_OUT,0,retain)
  __INIT_VAR(data__->_TMP_AND7_OUT,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_GEAR_body__(PYTHON_GEAR *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,_TMP_ADD10_OUT,,ADD__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UINT)__GET_VAR(data__->COUNTER,),
    (UINT)1));
  __SET_VAR(data__->,_TMP_EQ13_OUT,,EQ__BOOL__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UINT)__GET_VAR(data__->N,),
    (UINT)__GET_VAR(data__->_TMP_ADD10_OUT,)));
  __SET_VAR(data__->,_TMP_SEL15_OUT,,SEL__UINT__BOOL__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (BOOL)__GET_VAR(data__->_TMP_EQ13_OUT,),
    (UINT)__GET_VAR(data__->_TMP_ADD10_OUT,),
    (UINT)0));
  __SET_VAR(data__->,COUNTER,,__GET_VAR(data__->_TMP_SEL15_OUT,));
  __SET_VAR(data__->,_TMP_AND7_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->_TMP_EQ13_OUT,),
    (BOOL)__GET_VAR(data__->TRIG,)));
  __SET_VAR(data__->PY_EVAL.,TRIG,,__GET_VAR(data__->_TMP_AND7_OUT,));
  __SET_VAR(data__->PY_EVAL.,CODE,,__GET_VAR(data__->CODE,));
  PYTHON_EVAL_body__(&data__->PY_EVAL);
  __SET_VAR(data__->,ACK,,__GET_VAR(data__->PY_EVAL.ACK,));
  __SET_VAR(data__->,RESULT,,__GET_VAR(data__->PY_EVAL.RESULT,));

  goto __end;

__end:
  return;
} // PYTHON_GEAR_body__() 





void SWITCHVSLAMPS_init__(SWITCHVSLAMPS *data__, BOOL retain) {
  __INIT_VAR(data__->PB1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PB2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PB3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PB4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PB5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PB6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PB7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->L1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->L2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->L3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->L4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->L5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->L6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->L7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->L8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->L9,__BOOL_LITERAL(FALSE),retain)
  SR_init__(&data__->SR0,retain);
  SR_init__(&data__->SR1,retain);
  SR_init__(&data__->SR2,retain);
  SR_init__(&data__->SR3,retain);
  SR_init__(&data__->SR4,retain);
  SR_init__(&data__->SR5,retain);
  SR_init__(&data__->SR6,retain);
  SR_init__(&data__->SR7,retain);
  SR_init__(&data__->SR8,retain);
  __INIT_VAR(data__->_TMP_OR34_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_OR27_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_OR28_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_OR26_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_OR30_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_OR32_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_OR29_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_OR31_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_OR33_OUT,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void SWITCHVSLAMPS_body__(SWITCHVSLAMPS *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->,_TMP_OR34_OUT,,OR__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->PB6,),
    (BOOL)__GET_VAR(data__->PB7,)));
  __SET_VAR(data__->SR8.,S1,,__GET_VAR(data__->PB3,));
  __SET_VAR(data__->SR8.,R,,__GET_VAR(data__->_TMP_OR34_OUT,));
  SR_body__(&data__->SR8);
  __SET_VAR(data__->,L7,,__GET_VAR(data__->SR8.Q1,));
  __SET_VAR(data__->,_TMP_OR27_OUT,,OR__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->PB4,),
    (BOOL)__GET_VAR(data__->PB7,)));
  __SET_VAR(data__->SR0.,S1,,__GET_VAR(data__->PB1,));
  __SET_VAR(data__->SR0.,R,,__GET_VAR(data__->_TMP_OR27_OUT,));
  SR_body__(&data__->SR0);
  __SET_VAR(data__->,L1,,__GET_VAR(data__->SR0.Q1,));
  __SET_VAR(data__->,_TMP_OR28_OUT,,OR__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->PB5,),
    (BOOL)__GET_VAR(data__->PB7,)));
  __SET_VAR(data__->SR5.,S1,,__GET_VAR(data__->PB2,));
  __SET_VAR(data__->SR5.,R,,__GET_VAR(data__->_TMP_OR28_OUT,));
  SR_body__(&data__->SR5);
  __SET_VAR(data__->,L4,,__GET_VAR(data__->SR5.Q1,));
  __SET_VAR(data__->,_TMP_OR26_OUT,,OR__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->PB6,),
    (BOOL)__GET_VAR(data__->PB7,)));
  __SET_VAR(data__->SR1.,S1,,__GET_VAR(data__->PB1,));
  __SET_VAR(data__->SR1.,R,,__GET_VAR(data__->_TMP_OR26_OUT,));
  SR_body__(&data__->SR1);
  __SET_VAR(data__->,L2,,__GET_VAR(data__->SR1.Q1,));
  __SET_VAR(data__->,_TMP_OR30_OUT,,OR__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->PB4,),
    (BOOL)__GET_VAR(data__->PB7,)));
  __SET_VAR(data__->SR3.,S1,,__GET_VAR(data__->PB2,));
  __SET_VAR(data__->SR3.,R,,__GET_VAR(data__->_TMP_OR30_OUT,));
  SR_body__(&data__->SR3);
  __SET_VAR(data__->,L5,,__GET_VAR(data__->SR3.Q1,));
  __SET_VAR(data__->,_TMP_OR32_OUT,,OR__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->PB5,),
    (BOOL)__GET_VAR(data__->PB7,)));
  __SET_VAR(data__->SR6.,S1,,__GET_VAR(data__->PB3,));
  __SET_VAR(data__->SR6.,R,,__GET_VAR(data__->_TMP_OR32_OUT,));
  SR_body__(&data__->SR6);
  __SET_VAR(data__->,L8,,__GET_VAR(data__->SR6.Q1,));
  __SET_VAR(data__->,_TMP_OR29_OUT,,OR__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->PB5,),
    (BOOL)__GET_VAR(data__->PB7,)));
  __SET_VAR(data__->SR2.,S1,,__GET_VAR(data__->PB1,));
  __SET_VAR(data__->SR2.,R,,__GET_VAR(data__->_TMP_OR29_OUT,));
  SR_body__(&data__->SR2);
  __SET_VAR(data__->,L3,,__GET_VAR(data__->SR2.Q1,));
  __SET_VAR(data__->,_TMP_OR31_OUT,,OR__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->PB6,),
    (BOOL)__GET_VAR(data__->PB7,)));
  __SET_VAR(data__->SR4.,S1,,__GET_VAR(data__->PB2,));
  __SET_VAR(data__->SR4.,R,,__GET_VAR(data__->_TMP_OR31_OUT,));
  SR_body__(&data__->SR4);
  __SET_VAR(data__->,L6,,__GET_VAR(data__->SR4.Q1,));
  __SET_VAR(data__->,_TMP_OR33_OUT,,OR__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->PB4,),
    (BOOL)__GET_VAR(data__->PB7,)));
  __SET_VAR(data__->SR7.,S1,,__GET_VAR(data__->PB3,));
  __SET_VAR(data__->SR7.,R,,__GET_VAR(data__->_TMP_OR33_OUT,));
  SR_body__(&data__->SR7);
  __SET_VAR(data__->,L9,,__GET_VAR(data__->SR7.Q1,));

  goto __end;

__end:
  return;
} // SWITCHVSLAMPS_body__() 





