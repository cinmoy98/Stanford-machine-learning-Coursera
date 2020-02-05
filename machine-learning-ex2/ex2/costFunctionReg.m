function [J, grad] = costFunctionReg(theta, X, y, lambda)
%COSTFUNCTIONREG Compute cost and gradient for logistic regression with regularization
%   J = COSTFUNCTIONREG(theta, X, y, lambda) computes the cost of using
%   theta as the parameter for regularized logistic regression and the
%   gradient of the cost w.r.t. to the parameters. 

% Initialize some useful values
m = length(y); % number of training examples

% You need to return the following variables correctly 
J = 0;
grad = zeros(size(theta));

% ====================== YOUR CODE HERE ======================
% Instructions: Compute the cost of a particular choice of theta.
%               You should set J to the cost.
%               Compute the partial derivatives and set grad to the partial
%               derivatives of the cost w.r.t. each parameter in theta

h=sigmoid(X*theta);
f_term=-(y'*log(h));
s_term=(1-y)'*log(1-h);
J=((1/m)*(f_term-s_term))+((lambda/(2*m))*sum(theta(2:size(theta)).^2));

error=h-y;
X2=X(:,(2:end));
t_error=X2'*error;
zero_error=error'*X(:,1);
%n_X(1,1)=X(1,1);
%n_X(1,2)=X(1,2);
r_error=error(2:size(error));
grad(1,1)=(1/m)*zero_error;
grad(2:end)=((1/m)*t_error)+((lambda/m)*theta(2:size(theta)));




% =============================================================

end
